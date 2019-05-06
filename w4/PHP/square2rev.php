<?php
    $size = 0;

    fscanf(STDIN, "%d\n", $size);

    for ( $row = 0, $last = $size * $size, $limit = $last - $size + 1; $row < $size; $row++ ) {
        echo implode(' ', range($limit, $last, 1)) . PHP_EOL;
        $last -= $size;
        $limit -= $size;
    }
?>