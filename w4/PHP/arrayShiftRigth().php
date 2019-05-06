<?php
    function arrayShiftRigth(&$array) {
        $lastElem = array_pop($array);

        array_unshift($array, $lastElem);
    }
?>