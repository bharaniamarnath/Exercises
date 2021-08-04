@aoa = (
  ["adam","becky","chris","diana"],
  ["elle","frank","gwen","henry"],
  ["irwin","jessy","kurt","linda"]
);

for $aoaref ( @aoa ){
  print "\t [ @$aoaref], \n";
}

for $i (0 .. $#aoa){
  print "\t [@{$aoa[$i]}], \n";
}

for $i (0 .. $#aoa){
  for $j (0 .. $#{$aoa[$i]}){
    print "elt $i $j is $aoa[$i][$j]\n";
  }
}
