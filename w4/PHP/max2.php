<?php
    $a = 0;
    $b = 0;

    fscanf(STDIN, "%d%d\n", $a, $b);

    echo max($a, $b) . PHP_EOL;
?>