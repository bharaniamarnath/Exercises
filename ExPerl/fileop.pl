open(FHAND, "/home/bharani/Contents/Codes/Perl/perlreadme.txt") || die "Unable to open file";

while($rec = <FHAND>){
  print $rec;
}

close(FHAND);
