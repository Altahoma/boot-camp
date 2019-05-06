<?php
    function arrayShiftLeft(&$array) {
        $firstElem = array_shift($array);

        array_push($array, $firstElem);
    }
?>