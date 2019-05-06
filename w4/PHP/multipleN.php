<?php
    $max = 0;
    $divisor = 0;

    fscanf(STDIN, "%d%d\n", $max, $divisor);

    if ( $max < $divisor ) {
        echo 0 . PHP_EOL;
    } else {
        echo implode(' ', range(0, $max, $divisor)) . PHP_EOL;
    }
?>