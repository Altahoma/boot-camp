<?php
    class Passport {
        private static $nextSeries = [65, 65];
        private static $nextNumber = 0;
        private $firstName;
        private $lastName;
        private $year;
        private $month;
        private $day;
        private $series;
        private $number;

        private function validate($month, $day, $year) {
            if ( checkdate($month, $day, $year) ) {
                $this->month = $month;
                $this->day = $day;
                $this->year = $year;
                return;
            }
            throw new Exception("Invalid date");
        }

        private function setSeries() {
            $this->number = self::$nextNumber;
            $this->series = self::$nextSeries;

            if ( $this->number == 999999 ) {
                self::$nextNumber = 0;

                if ( self::$nextSeries[1] == 90 ) {
                    self::$nextSeries[0] += 1;
                    self::$nextSeries[1] = 65;
                } else {
                    self::$nextSeries[1] += 1;
                }
            } else {
                self::$nextNumber++;
            }
        }

        public function __construct(String $firstName, String $lastName, $year, $month, $day) {
            $this->firstName = $firstName;
            $this->lastName = $lastName;
            $this->validate($month, $day, $year);
            $this->setSeries();
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public static function getSeries() {
            return self::$nextSeries;
        }

        public static function __callStatic($name, $arg) {
            if ( $name == "setNewSeries"
                && count($arg) == 2
                && (is_string($arg[0]) && is_string($arg[1]))
                && (strlen($arg[0]) == 1 && strlen($arg[1]) == 1)
                && ($arg[0] >= 'A' && $arg[0] <= 'Z')
                && ($arg[1] >= 'A' && $arg[1] <= 'Z') ) {
                self::$nextSeries[0] = ord($arg[0]);
                self::$nextSeries[1] = ord($arg[1]);
                self::$nextNumber = 0;
                return;
            }
            if ( $name == "setNewSeries"
                && count($arg) == 3
                && (is_string($arg[0]) && is_string($arg[1]))
                && (strlen($arg[0]) == 1 && strlen($arg[1]) == 1)
                && ($arg[0] >= 'A' && $arg[0] <= 'Z')
                && ($arg[1] >= 'A' && $arg[1] <= 'Z')
                && is_int($arg[2])
                && ($arg[2] >= 0 && $arg[2] <= 999999) ) {
                self::$nextSeries[0] = ord($arg[0]);
                self::$nextSeries[1] = ord($arg[1]);
                self::$nextNumber = $arg[2];
                return;
            }
            throw new Exception("Invalid series");
        }

        public function __toString() {
            return sprintf("First name: $this->firstName\nLast name: $this->lastName\nBirthday: $this->day.$this->month.$this->year\nSeries: %c%c %s\n", $this->series[0], $this->series[1], str_pad($this->number, 6, 0, STR_PAD_LEFT));
        }
    }
?>