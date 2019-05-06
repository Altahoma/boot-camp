<?php
    function arrayZeroFill(&$array) {
        foreach ($array as &$elem) {
            $elem = 0;
        }
    }
?>