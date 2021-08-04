@saoh = (
  {
    shape => "circle",
    color => "red",
    position => "top"
  },
  {
    shape => "square",
    color => "green",
    position => "bottom"
  },
  {
    shape => "triangle",
    color => "blue",
    position => "center"
  }
);

for $sha (@saoh){
  for $det (keys %$sha){
    print "$det is $sha->{$det} | ";
  }
  print "\n";
}

for $i (0 .. $#saoh){
  for $det (keys %{$saoh[$i]}){
    print "$det is $saoh[$i]{$det} ! ";
  }
  print "\n";
}
