#!/usr/bin/perl -w

use strict;

my @saoh;

open(FHAND, "/home/bharani/Contents/Codes/Perl/shapes.txt") || die "Unable to open file";

while (my $line = <FHAND>){
  my $rec = {};
  for my $field (split /\s+/, $line){
    my ($key, $value) = split /=/, $field;
    $rec->{$key} = $value;
  }
  push @saoh, $rec; 
}

close(FHAND);

for my $i (0 .. $#saoh){
  for my $det (sort keys %{$saoh[$i]}){
    print "$det: $saoh[$i]{$det} | ";
  }
  print "\n";
}
