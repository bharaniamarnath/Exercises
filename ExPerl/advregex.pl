#!/usr/bin/perl -w

use strict;

use warnings;

if("Hello World" =~ /World$/){
  print "Match1\n";
}
else{
  print "Mismatch1\n";
}

if("Hello World" =~ m!World$!){
  print "Match2\n";
}
else{
  print "Mismatch2\n";
}

my $s1 = "Hello World";

if("Hello World" =~ m!$s1!){
  print "Match3\n";
}
else{
  print "Mismatch3\n";
}

if("#!usr/bin/perl" =~ m!#\!usr/bin/perl/!){
  print "Match4\n";
}
else{
  print "Mismatch4\n";
}

if("debianjessie" =~ /^debian$/){
  print "Match5\n";
}
else{
  print "Mismatch5\n";
}

if("" =~ /^$/){
  print "Match6\n";
}
else{
  print "Mismatch6\n";
}

if("aa\n" =~ /^..$/){
  print "Match7\n";
}
else{
  print "Mismatch7\n";
}

if("Hello World\nGoodbye Universe" =~ /^Goodbye/m){
  print "Match8\n";
}
else{
  print "Mismatch8\n";
}

my $stmt = "Square is red\nCircle is green\n";

if($stmt =~ /green\Z/m){
  print "Match9\n";
}
else{
  print "Mismatch\n";
}

if($stmt =~ /^Circle/m){
  print "Match10\n";
}
else{
  print "Mismatch10\n";
}

if("keyboard" =~ /key(board(s|)|)/){
  print "Match11\n";
}
else{
  print "Mismatch11\n";
}

if("1991" =~ /(19|20|)\d\d/){
  print "Match12\n";
}
else{
  print "Mismatch12\n";
}
if("18:20:05" =~ /(\d\d):(\d\d):(\d\d)/){
  print "Match13\n";
}
else{
  print "Mismatch13\n";
}
if("if if" =~ /\b(\w\w)\s\g1\b/){
  print "Match14\n";
}
else{
  print "Mismatch14\n";
}
