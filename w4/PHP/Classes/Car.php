<?php
require_once 'Point.php';
    class Car {
        private $fuelAmount;
        private $fuelCapacity;
        private $fuelConsumption;
        private $location;
        private $model;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($fuelCapacity=60, $fuelConsumption=0.6, Point $location=null, String $model="Mercedes") {
            $this->fuelAmount = 0;
            $this->fuelCapacity = $this->validate($fuelCapacity);
            $this->fuelConsumption = $this->validate($fuelConsumption);
            if ( $location === null ) {
                $this->location = new Point();
            } else {
                $this->location = $location;
            }
            $this->model = $model;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public function __call($name, $arg) {
            if ( $name == "drive"
                && count($arg) == 1
                && isset($arg[0])
                && ($arg[0] instanceof Point)) {
                $fuelNeeded = $this->location->distance($arg[0]) * $this->fuelConsumption;

                if ( $fuelNeeded > $this->fuelAmount ) {
                    return new Exception("Out of fuel");
                }

                $this->fuelAmount -= $fuelNeeded;
                $this->location = $arg[0];
                return;
            }
            if ( $name == "drive"
                && count($arg) == 2
                && isset($arg[0])
                && isset($arg[1])
                && is_numeric($arg[0])
                && is_numeric($arg[1]) ) {
                $this->drive(new Point($arg[0], $arg[1]));
                return;
            }
            throw new Exception("Invalid method");
        }

        public function refill($fuel) {
            if ( !is_numeric($fuel) ) {
                throw new Exception("Invalid param");
            }
            if ( $fuel <= 0 ) {
                throw new Exception ("Out of fuel");
            }
            if ( $fuel > $this->fuelCapacity - $this->fuelAmount ) {
                throw new Exception("To much fuel");
            }
            $this->fuelAmount += $fuel;
        }

        public function __toString() {
            return sprintf("Model: $this->model\nLocation: $this->location\nFuelAmoun: $this->fuelAmount");
        }
    }
?>

