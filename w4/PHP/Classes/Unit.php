<?php
    class Unit {
        private $damage;
        private $hitPoints;
        private $hitPointsLimit;
        private $name;

        private function ensureIsAlive() {
            if ( $this->hitPoints == 0 ) {
                throw new Exception("Unit is dead");
            }
        }

        private function validate($vulue) {
            if ( is_numeric($vulue) ) {
                return $vulue;
            }
            throw new Exception("Invalid param");
        }

        public function __construct(String $name, $hp, $dmg) {
            $this->damage = $this->validate($dmg);
            $this->hitPointsLimit = $this->validate($hp);
            $this->hitPoints = $hp;
            $this->name = $name;
        }

        public function __get($name) {
            if ( property_exists($this, $name) ) {
                return $this->$name;
            }
            throw new Exception("Attribute error: attribute $name not found");
        }

        public function addHitPoints($hp) {
            $this->ensureIsAlive();

            if ( $this->validate($hp) > $this->hitPointsLimit - $this->hitPoints ) {
                $this->hitPoints = $this->hitPointsLimit;
                return;
            }

            $this->hitPoints += $hp;
        }

        public function takeDamage($dmg) {
            $this->ensureIsAlive();

            if ( $this->validate($dmg) > $this->hitPoints ) {
                $this->hitPoints = 0;
                return;
            }

            $this->hitPoints -= $dmg;
        }

        public function attack(Unit $enemy) {
            $enemy->takeDamage($this->damage);

            if ( $enemy->hitPoints > 0 ) {
                $this->counterAttack($enemy);
            }
        }

        public function counterAttack(Unit $enemy) {
            $dmg = $enemy->damage / 2;

            $this->takeDamage($dmg);
        }

        public function __toString() {
            return sprintf("Name: $this->name\nHP: $this->hitPoints/$this->hitPointsLimit\nDamage: $this->damage\n");
        }
    }
?>