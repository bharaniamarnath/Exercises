#!/usr/bin/perl -w

use strict;

my $aoa = [];

my @r1 = 21 .. 25;

$aoa->[0] = [ @r1 ];

print $aoa->[0][2], "\n";

push @{$aoa}, 30;

my @r2 = 36 .. 40;

push @{$aoa}, [ @r2 ];

print $aoa->[1], "\n";

print $aoa->[2][2], "\n";

my @naoa = (
  ["alex","bianca","colby","dixie"],
  ["evie","fred"],
  ["ijorn","june","kent"]
);

push @{$naoa[1]}, "greta","hunt";

print $naoa[1][2], "\n";

push @{$naoa[2]}, "lydia";