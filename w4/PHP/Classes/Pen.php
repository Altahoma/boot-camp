<?php
    class Pen {
        private $inkAmount;
        private $inkCapacity;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($inkCapacity=64) {
            $this->inkCapacity = $this->validate($inkCapacity);
            $this->inkAmount = $inkCapacity;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public function write(Paper $paper, String $message) {
            if ( $this->inkAmount < 1 ) {
                throw new Exception("Out of ink");
            }

            if ( strlen($message) > $this->inkAmount ) {
                $this->write($paper, substr($message, 0, $this->inkAmount));
                return;
            }

            $spaceFree = $paper->maxSymbols - $paper->symbols;
            if ( strlen($message) > $spaceFree ) {
                $this->write($paper, substr($message, 0, $spaceFree));
                return;
            }

            $this->inkAmount -= strlen($message);
            $paper->addContent($message);
        }

        public function refill() {
            $this->inkAmount = $this->inkCapacity;
        }
    }
?>