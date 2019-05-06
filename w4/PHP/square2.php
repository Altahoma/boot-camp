<?php
    $size = 0;

    fscanf(STDIN, "%d\n", $size);

    for ( $row = 0, $counter = 1, $limit = $size; $row < $size; $row++ ) {
        echo implode(' ', range($counter, $limit)) . PHP_EOL;
        $counter += $size;
        $limit += $size;
    }
?>