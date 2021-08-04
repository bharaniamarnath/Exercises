$items = "Apple, Butter, Cherry, Donut, Egg";

my (@food) = split(/, /, $items);

print $food[0], "\n";

for $i (@food){
  print "$i tastes good!", "\n";
}