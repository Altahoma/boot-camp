<?php
    class Mohican {
        private static $lastId = 0;
        private $id;
        private static $lastMohican;

        public function __construct() {
            $this->id = ++self::$lastId;
            self::$lastMohican = $this;
        }

        public static function getLast() {
            return self::$lastMohican;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Invalid param");
        }

        public function __clone() {
            $this->id = ++self::$lastId;
            self::$lastMohican = $this;
        }
    }
?>