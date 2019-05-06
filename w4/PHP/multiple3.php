<?php
    $limit = 0;

    fscanf(STDIN, "%d\n", $limit);

    if ( $limit < 3 ) {
        echo "0" . PHP_EOL;
    } else {
        echo implode(' ', range(0, $limit, 3)) . PHP_EOL;
    }
?>