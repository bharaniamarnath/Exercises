$price = 55;
$qty = 8;

$total = $price * $qty;
$wallet = 500;

if ($total < $wallet){
  print "Purchase completed\n";
}
unless ($total < $wallet){
  print "Not enough money in wallet\n";
}

$fat = 23;

print "Eat cheese\n" if $fat < 25;

#un-less is similar to if-not

print "Do not eat cheese\n" unless $fat < 25;