#!/usr/bin/perl -w

use strict;

my %hoa;

open(FHAND, "/home/bharani/Contents/Codes/Perl/kdeapps.txt") || die "Unable to open file";

while (my $line = <FHAND>) {
  my ($cat, $applist) = split /:\s*/, $line, 2;
  my @apps = split ' ', $applist;
  $hoa{$cat} = [ @apps ];
}

close(FHAND);

print $hoa{Graphics}[1], "\n";

foreach my $category ( keys %hoa ){
  print "$category: ";
  foreach my $i ( 0 .. $#{ $hoa{$category} } ){
    print "$hoa{$category}[$i]\t";
  }
  print "\n";
}
