<?php
    class Identifiable {
        private static $lastId = 0;
        private $id;

        public function __construct() {
            $this->id = ++self::$lastId;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Invalid param");
        }

        public function __clone() {
            $this->id = ++self::$lastId;
        }
    }
?>