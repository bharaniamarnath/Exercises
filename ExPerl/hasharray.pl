my %animals;

push @{$animals{'wild'}}, 'lion';

push @{$animals{'domestic'}}, 'dog';

push @{$animals{'wild'}}, 'hyena';

push @{$animals{'domestic'}}, 'cat';

for my $akey (keys %animals){
  print $akey, ": ";
  my @anims = @{$animals{$akey}};
  print join ', ', @anims;
  print "\n";
}