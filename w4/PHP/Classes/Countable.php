<?php
    class Foo implements Countable {
        private static $count = 0;

        public function __construct() {
            self::$count += 1;
        }

        public function count() {
            return self::$count;
        }

        public static function getCount() {
            return self::$count;
        }

        public function __clone() {
            self::$count += 1;
        }
    }

    $a = new Foo();
    $b = new Foo();
    $c = new Foo();

    echo count($a) . PHP_EOL;
    echo Foo::getCount() . PHP_EOL;

    $d = $a;
    $c = clone $a;

    echo count($a) . PHP_EOL;
    echo Foo::getCount() . PHP_EOL;

?>

