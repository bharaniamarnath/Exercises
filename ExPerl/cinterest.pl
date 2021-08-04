$current = 10000;
$year = 2010;
$period = 10;
$rate = 8.5;

for $i (1 .. $period){
  print $year, "\t";
  $year++;
  print $current, "\t";
  $interest = int (($rate / 100) * $current * 100) / 100;
  print $interest, "\t";
  $current += $interest;
  print $current, "\n";
}
print $year, "\t", $current, "\n";