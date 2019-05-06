<?php
    $a = 0;
    $isZulu = true;

    fscanf(STDIN, "%d\n", $a);

    if ( $a % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
        $isZulu = false;
    }
    if ( $a % 3 == 0 ) {
        echo "bravo" . PHP_EOL;
        $isZulu = false;
    }
    if ( $a % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
        $isZulu = false;
    }
    if ( $isZulu ) {
        echo "zulu" . PHP_EOL;
    }
?>