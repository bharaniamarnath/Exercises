#!/usr/bin/perl -w

use strict;

#array copy

my $aorig = ["adam","becky","chris","diana"];

my $acopy = [@{$aorig}];

$acopy->[1] = "brenda";

print $aorig->[1], "\n";

print $acopy->[1], "\n";

#hash copy

my $horig = {"elle"=>20, "frank"=>23, "gwen"=>19, "henry"=>21};

my $hcopy = {%{$horig}};

$hcopy->{"henry"} = 22;

print $horig->{"henry"};

print $hcopy->{"henry"};