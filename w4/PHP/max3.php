<?php
    $a = 0;
    $b = 0;
    $c = 0;

    fscanf(STDIN, "%d%d%d\n", $a, $b, $c);

    echo max($a, $b, $c) . PHP_EOL;
?>