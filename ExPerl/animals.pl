my %animals;

open(FHAND, "/home/bharani/Contents/Codes/Perl/perlanims.txt") || die "Unable to open file";

while ($buf = <FHAND>) {
  chomp;
  my ($animal, $type) = split /, /, $buf;
  $animals{$type} = [] unless exists $animals{$type};
  push @{$animals{$type}}, $animal;
}

for my $atype (sort keys %animals) {
  print $atype, ": ";
  my @anims = @{$animals{$atype}};
  print join ', ', sort @anims;
  print "\n";
}

close(FHAND);