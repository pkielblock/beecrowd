<?php

function addNumbers(int $a, int $b): int
{   
    $x = $a + $b;

    return $x;
}

$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));

$x = addNumbers($a, $b);

echo 'X = ' . $x . PHP_EOL;

?>