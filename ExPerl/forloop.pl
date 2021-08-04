for $i ("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"){
  print "$i\n";
} 
for $i (1 .. 4){
  print "$i\n";
}
@range50 = (51 .. 59);
for $i (@range50){
  print "$i\n"
}
@onetoten = (1 .. 10);
$top = 25;
for $i (@onetoten, 15, 20 .. $top){
  print "$i\n";
}
%months = ("January" => 1, "February" => 2, "March" => 3, "April" => 4, "May" => 5, "June" => 6, "July" => 7, "August" => 8, "September" => 9, "October" => 10, "November" => 11, "December" => 12);

for $i (keys %months){
  print "$i is month $months{$i}\n";
}

for $x ('Lion', 'Hyena', 'Giraffe', 'Hippopotamaus'){
  print "$x is a wild animal\n";
}

$apush = [];

$newa = [110,120,130];

for $x (1 .. 10){
  $apush[$x] = $x * 10;
}

print $apush[2], "\n";

push @apush, [ @newa ];

print $apush[10], "\n";