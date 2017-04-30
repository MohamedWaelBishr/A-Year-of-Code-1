<?php

$host = "localhost";
$user = "root";
$password = "";
$datbase = "dbtuts";
mysql_connect($host,$user,$password);
mysql_select_db($datbase);

//INSERT 
if(isset($_POST['btn-save']))
{
 // variables for input data
 $first_name = $_POST['first_name'];
 $last_name = $_POST['last_name'];
 $city_name = $_POST['city_name'];
 // variables for input data
 
 // sql query for inserting data into database
 
        $sql_query = "INSERT INTO users(first_name,last_name,user_city) VALUES('$first_name','$last_name','$city_name')";
 mysql_query($sql_query);
        
        // sql query for inserting data into database
 
}

//SELECT 
$sql_query="SELECT * FROM users";
$result_set=mysql_query($sql_query);
while($row = mysql_fetch_array($result))
{
    ?>
    echo $row;
    <?php
}


//UPDATE 

if(isset($_POST['btn-update']))
{
 // variables for input data
 $first_name = $_POST['first_name'];
 $last_name = $_POST['last_name'];
 $city_name = $_POST['city_name'];
 // variables for input data
 
 // sql query for update data into database
 $sql_query = "UPDATE users SET first_name='$first_name',last_name='$last_name',user_city='$city_name' WHERE user_id=".$_GET['edit_id'];
        mysql_query($sql_query);
 // sql query for update data into database
}


//DELETE 

if(isset($_GET['delete_id']))
{
 $sql_query="DELETE FROM users WHERE user_id=".$_GET['delete_id'];
 mysql_query($sql_query);
 header("Location: $_SERVER[PHP_SELF]");
}

?>
