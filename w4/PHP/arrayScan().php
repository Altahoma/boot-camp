<?php
    function arrayScan($in, &$array, $limit) {
        $array = explode(" ", trim(fgets($in)), $limit+1);

        if ( count($array) > $limit ) {
            array_pop($array);
        }

        return count($array);
    }
?>