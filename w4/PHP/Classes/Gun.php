<?php
    class Gun {
        private $amount;
        private $capacity;
        private $isReady;
        private $model;
        private $totalShots;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct(String $model="Beretta", $capacity=8) {
            $this->amount = 0;
            $this->capacity = $this->validate($capacity);
            $this->isReady = FALSE;
            $this->model = $model;
            $this->totalShots = 0;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public function ready() {
            return $this->isReady;
        }

        public function prepare() {
            $this->isReady = !$this->isReady;
        }

        public function reload() {
            $this->amount = $this->capacity;
        }

        public function shoot() {
            if ( !$this->ready() ) {
                throw new Exception("Not ready");
            }
            if ( $this->amount == 0 ) {
                $this->isReady = FALSE;
                throw new Exception("Out of rounds");
            }

            $this->amount -= 1;
            $this->totalShots += 1;
            echo "Bang!" . PHP_EOL;
        }

        public function __toString() {
            return sprintf("Model: $this->model\nReady: %d\nAmount: $this->amount/$this->capacity\nTotal shots: $this->totalShots\n", $this->isReady);
        }
    }
?>