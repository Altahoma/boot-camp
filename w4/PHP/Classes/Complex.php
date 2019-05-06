<?php
    class Complex {
        private $real;
        private $imaginary;

        public function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($real=0, $imaginary=0) {
            $this->real = $this->validate($real);
            $this->imaginary = $this->validate($imaginary);
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            return new Exception("Attribute error: attribute $name not found");
        }

        public function sum(Complex $other) {
            return new Complex($this->real + $other->real, $this->imaginary + $other->imaginary);
        }

        public function diff(Complex $other) {
            return new Complex($this->real - $other->real, $this->imaginary - $other->imaginary);
        }

        public function prod(Complex $other) {
            return new Complex($this->real * $other->real, $this->imaginary * $other->imaginary);
        }

        public function __toString() {
            if ( $this->imaginary < 0 ) {
                return sprintf("%g%gi", $this->real, $this->imaginary);
            }
            return sprintf("%g+%gi", $this->real, $this->imaginary);
        }
    }
?>