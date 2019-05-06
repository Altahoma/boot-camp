<?php
    $limit = 0;

    fscanf(STDIN, "%d\n", $limit);

    echo implode(' ', range(1, $limit)) . PHP_EOL;
?>