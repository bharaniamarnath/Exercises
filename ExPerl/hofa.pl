#!/usr/bin/perl -w

use strict;

my %hofa = (
  "fruits" => ["apple","orange","grapes","pear"],
  "vegetables" => ["onion","tomato","radish","potato"],
  "flowers" => ["daisy","lily","rose","tulip"]
);

print $hofa{vegetables}[3], "\n";
