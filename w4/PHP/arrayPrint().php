<?php
    function arrayPrint($out, $array) {
        $a = implode(" ", $array);

        fprintf($out, "%s\n", $a);
    }
?>