<?php
    $limit = 0;

    fscanf(STDIN, "%d\n", $limit);

    if ( $limit == 1 ) {
        echo "0" . PHP_EOL;
    } else {
        echo implode(' ', range(0, $limit, 2)) . PHP_EOL;
    }
?>