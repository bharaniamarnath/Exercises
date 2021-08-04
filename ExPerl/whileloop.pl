$x = 0;
$y = 0;
print $x++, "\n" while $x <= 10;
print $y++, "\n" until $y > 10;

$i = 0;
$j = 0;

do{
  print $i, " wooh!\n";
  $i++;
}until $i > 10;

do{
  print "Go!\n";
  $j++;
}while $j <= 10;