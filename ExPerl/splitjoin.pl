#!/usr/bin/perl -w

use strict;

my $stmt = "This is a test statement";

my @words = split(/ /, $stmt);

print $words[3], "\n";

print join (':', split (//, "test")), "\n";