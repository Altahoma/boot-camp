<?php
    $a = 0;
    $b = 0;

    fscanf(STDIN, "%d%d\n", $a, $b);

    if ( $a <= $b ) {
        echo "alpha" . PHP_EOL;
    } else if ( $a < 0 ) {
        echo "bravo" . PHP_EOL;
    } else if ( $b == 0 ) {
        echo "charlie" . PHP_EOL;
    } else {
        echo "zulu" . PHP_EOL;
    }
?>