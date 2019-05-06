<?php
    class Paper {
        private $maxSymbols;
        private $symbols;
        private $content;

        private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($maxSymbols=64) {
            $this->maxSymbols = $this->validate($maxSymbols);
            $this->symbols = 0;
            $this->content = "";
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public function addContent(String $message) {
            if ( strlen($this->content) == $this->maxSymbols ) {
                throw new Exception("Out of space");
            }

            $this->content = str_pad($this->content, strlen($this->content) + strlen($message), $message);
            $this->symbols = strlen($this->content);
        }

        public function show() {
            echo $this->content . PHP_EOL;
        }
    }
?>