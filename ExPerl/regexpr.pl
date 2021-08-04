#!/usr/bin/perl -w

use strict;

my $txt = "Hello World";

my $pthtxt = "/home/bharani/Contents/Codes/Perl";

my $metatxt = "2+2=4";

my $word = "world";

my $c = 'bcrf';

print "Match\n" if $txt =~ /World/;

print "No match\n" if $txt !~ /World/;

print "Match\n" if $txt =~ m!World!;

print "Match\n" if $txt =~ m{World};

print "Path match\n" if $pthtxt =~ m"/Perl";

print "Path not match\n" if $pthtxt !~ m"/Perl";

print "Match\n" if $metatxt =~ /2\+2/;

print "Hex Match\n" if "t" =~ /\x74/;

print "Word Match\n" if "helloworld" =~ /hello$word/;

print "\\n Match\n" if "1000\n2000" =~ m(0\n2);

print "Match beginning\n" if "helloworld" =~ /^hello/;

print "Match end\n" if "helloworld" =~ /world$/;

print "Match full\n" if "hellouniverse" =~ /^hellouniverse$/;

print "Match class\n" if "wut" =~ /[phc]ut/;

print "Match case\n" if "Yes" =~ /[Yy][Ee][Ss]/;

print "Match case 2\n" if "No" =~ /No/i;

print "Match\n" if "cat" =~ /[$c]at/;

print "Match\n" if "cat" =~ /[\$c]at/;

print "Match\n" if "cat" =~ /[\\$c]at/;

print "Match num\n" if "8" =~ /[0-9]/;

print "Match\n" if "yat" =~ /[^a]at/;

print "Match num 2\n" if "123" =~ /[\d]/; 

print "Match\n" if "^at" =~ /[a^]at/;

print "Match non-num\n" if "12a" =~ /[^0-9]/; #Even a single non-numeric character in string will mark the condition false

print "Match alphanumeric\n" if "Abc_123" =~ /[\w]/;

print "Match whitespace\n" if "Abc 123" =~ /[\s]/;

print "Match special char\n" if "Abc#123" =~ /[\W]/;

print "Match time format\n" if "12:30:00" =~ /\d\d:\d\d:\d\d/;

print "Match\n" if "efat" =~ /..at/;

print "Match boundary\n" if "Cat chased the fat rat" =~ /\b[$c]at\b/;

print "Match any condition\n" if "Hello World. Hello Universe. Hello Perl." =~ /World|Universe|Perl/;

print "Match any condition 2\n" if "perl" =~ /p|pe|per|perl/;

print "Match group\n" if "Universe" =~ /(Uni|Multi)verse/;

if("Multiverse-1024" =~ /(Uni|Multi)verse-([\d]+)/){
  my $versetype = $1;
  my $versenum = $2;
  print "Extracted using regex: $versetype", "\n";
  print "$versenum", "\n";
}

print "Match\n" if "a123" =~ /(a+)+([\d]+)/;

print "Match count\n" if '12345' =~ /^\d{3,5}$/;

print "Match\n" if "abcd123" =~ /^[a-z]{3,5}+[0-9]{3,5}$/;

print "Match pattern\n" if "name:perl" =~ /^(\w{1,})+:+(\w{1,})$/;

my $field;

my $value;

($field, $value) = ("name:kate" =~ /^(\w{1,})+:+(\w{1,})$/);

print $field, "\n";

print $value, "\n";

my $val1;

my $val2;

($val1, $val2) = split /: /, "age: 20", 2;

print $val1, "\n";

print $val2, "\n";

if ("This is a statement" =~ /^(.*)(nt)$/){
  print $1, "\n";
  print $2, "\n";
}

my $x = "This is a statement";

while ($x =~ /(\w+)/g){
  print "Word = $1, End position = ", pos $x, "\n";
}

my $stmt1 = "The cat chased the! rat on the mat on and on!";

print "Match\n" if $stmt1 =~ /[\w]ed/;

my @edwords = ($stmt1 =~ /([\w]*e[[\s|\W]|[\s]])/g);

foreach my $t (@edwords){
  print $t, "\n";
}

my $rpst = "This is a statement to replace the word: Jessie";

print $rpst, "\n";

$rpst =~ s/Jessie/Stretch/;

print $rpst, "\n";

my $rpst1 = "Two is after Three. Two is before Five.";

print $rpst1, "\n";

$rpst1 =~ s/Two/Four/g;

print $rpst1, "\n";

my $rpst2 = "Color: Red";

my $rpst3 = $rpst2 =~ s/Red/Green/r;

print $rpst2, "\n", $rpst3, "\n";

my @qwel = qw(a b c 1 2 3);

print $qwel[0], "\n";

my @qwel1 = map {s/[a-z]/0/r} @qwel;

print $qwel1[0], "\n";

$rpst1 =~ s/(\w+)/reverse $1/ge;

print $rpst1, "\n";

my $rpst4 = "Converting percent: 65%";

$rpst4 =~ s!(\d+)%!$1/100!e;

print $rpst4, "\n";