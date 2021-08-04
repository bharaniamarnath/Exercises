my %table;

open(FHAND, "/home/bharani/Contents/Codes/Perl/perlcity.txt") || die "Unable to open file";

while($buf = <FHAND>){
  chomp;
    my ($city, $country) = split(/, /, $buf);
    $table{$country} = [] unless exists $table{$country};
    push @{$table{$country}}, $city;
}

foreach $country (sort keys %table){
  print "$country: ";
  my @cities = @{$table{$country}};
  print join ', ', sort @cities;
  print ".\n";
}

close(FHAND);