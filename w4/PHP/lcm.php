<?php
    $in = fopen('task.in', 'r');
    $out = fopen('task.out', 'w');
    $a = 0;
    $b = 0;

    function gcd($a, $b) {
        if ( $b == 0 ) {
            return $a;
        }
        return gcd($b, $a%$b);
    }

    function lcm($a, $b) {
        return $a * ($b / gcd($a, $b));
    }

    fscanf($in, "%d%d", $a, $b);
    fclose($in);

    fprintf($out, "%d\n", lcm($a, $b));
    fclose($out);

?>