<?php
    $limit = 0;

    fscanf(STDIN, "%d\n", $limit);

    if ( $limit == 2 ) {
        echo "1" . PHP_EOL;
    } else {
        echo implode(' ', range(1, $limit, 2)) . PHP_EOL;
    }
?>