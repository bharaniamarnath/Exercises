#!/usr/bin/perl -w

use strict;

my $det = {};

my $field = {};

my $pattrn = "name1:field1=value1,field2=value2,field3=value3";

(my $nme, my $flds) = split ":", $pattrn, 2;

for my $fs (split ",", $flds){
  (my $f, my $v) = split "=", $fs;
  $field->{$f} = $v;
}

print $field->{field1}, "\n";

$det->{$nme} = $field;

print $det->{name1}{field2}, "\n";

my $wrfile = "/home/bharani/Contents/Codes/Perl/regsplit.txt";

open (FHAND, ">> $wrfile");

use Data::Dumper;

local $Data::Dumper::Terse = 1;

my $opstr = Dumper($det);

print FHAND $opstr;

close (FHAND);