<?php

$myObj->name = "Rashad";
$myObj->age = 19;
$myObj->city = "Ismailia";

$myJSON = json_encode($myObj);

echo $myJSON;

$myArr = array("Bla", "Bla Bla", "Blaaa", "Blabla");

$myJSON2 = json_encode($myArr);

echo $myJSON2;

?>
