<?php
    $size = 0;

    fscanf(STDIN, "%d\n", $size);

    for ( $row = 0; $row < $size; $row++ ) {
        echo implode(' ', range(1, $size)) . PHP_EOL;
    }
?>