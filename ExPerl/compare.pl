#!/usr/bin/perl -w

use strict;

my $str1 = "Hello";

my $str2 = "Hello";

print $str1 cmp $str2, "\n";

my %has1 = (
  "circle" => ["red","blue","green"],
  "square" => ["yellow","pink","orange","violet","black"],
  "triangle" => ["brown","cyan","grey","purple"]
);

foreach my $shape (sort {
    @{$has1{$a}} <=> @{$has1{$b}} || $a cmp $b
  } keys %has1) {
    print "$shape: ", join (', ', sort @{$has1{$shape}}), "\n";
}