<html>
<body>
<title>M FUZAIL RAZA ( 42ba3b64 )</title>
<h1> Welcome to my guessing game</h1>

<?php
$correctnumber=40; //change this number //

if($_GET['guess'])
{
  if (is_numeric($_GET['guess'])===FALSE)
 {
echo "Your guess is not a number";
}
else if ($_GET['guess']<$correctnumber)
 {
echo "Your guess is too low";
}
else if ($_GET['guess']>$correctnumber)
 {
echo "Your guess is too high";
}
else if ($_GET['guess']==$correctnumber)
 {
echo "Congratulations - You are right";
}
}
else
{
echo "Missing guess parameter <br> Your guess is too short";
}



?>
</body>
</html>
