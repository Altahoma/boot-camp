<?php
    $dividend = 0;
    $divisor = 0;
    $multiple = 0;

    fscanf(STDIN, "%d%d\n", $dividend, $divisor);

    if ( $divisor < 0 ) {
        $divisor *= -1;
    }

    $multiple = $dividend - $dividend % $divisor;
    if ( $multiple < $dividend ) {
        $multiple += $divisor;
    }

    echo $multiple . PHP_EOL;
?>