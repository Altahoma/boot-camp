<?php
    $a = 0;
    $b = 0;
    $c = 0;
    $d = 0;

    fscanf(STDIN, "%d%d%d%d\n", $a, $b, $c, $d);

    echo max($a, $b, $c, $d) . PHP_EOL;
?>