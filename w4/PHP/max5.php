<?php
    $a = 0;
    $b = 0;
    $c = 0;
    $d = 0;
    $e = 0;

    fscanf(STDIN, "%d%d%d%d%d\n", $a, $b, $c, $d, $e);

    echo max($a, $b, $c, $d, $e) . PHP_EOL;
?>