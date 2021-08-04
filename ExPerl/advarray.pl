@aoa = (
  ["adam","becky","carl","diana"],
  ["eliza","frank","gwen","henry"],
  ["irwin","jenna","kurt","lana"]
);

print $aoa[2][1], "\n";

$raoa = [
  ["adam","becky","carl","diana"],
  ["eliza","frank","gwen","henry"],
  ["irwin","jenna","kurt","lana"]
];

print $raoa->[2][1], "\n";

$na = ["mandy","neil","olivia","phil"];

push @aoa, $na;

print $aoa[3][2], "\n";

$na->[2] = "oxana";

print $na->[2], "\n";

#push @aoa, $na;

print $aoa[4][2], "\n";

@newa = ("quill","roxy","steve","udele");

print $newa[1], "\n";

$newa[1] = "rachel";

print $newa[1], "\n";

$nwaref = \@newa;

push @aoa, $nwaref;

print $aoa[5][1], "\n";

for my $i (@{$nwaref}){
  print $i, "\n";
}

for my $i (@aoa){
  for my $j (@$i){
    print $j, "\n";
  }
}

$nwaref2 = [@{$nwaref}];

print $nwaref2->[1], "\n";

$nwaref2->[1] = "riley";

print $nwaref->[1], "\n";

print $nwaref2->[1], "\n";

for $x (1 .. 10){
  for $y (1 .. 10){
    for $z (1 .. 10){
      $cplxa[$x][$y][$z] = $x + ($y * 2) - $z;
    }
  }
}

print $cplxa[10][2][1], "\n";

@aofa = ([1,2],[5,10],[25,50,75]);

print $aofa[2][1], "\n";

my @sclra;

$sclra[0] = scalar @newa;

print $sclra[0], "\n";

push @{$aofa[1]}, 15, 20;

print $aofa[1][2], "\n";