%hoh = (
  lion => {
    type => "animal",
    habitat => "land"
  },
  eagle => {
    type => "bird",
    habitat => "air"
  },
  shark => {
    type => "fish",
    habitat => "water"
  }
);

foreach $species (sort keys %hoh){
  print "$species: ";
  for $props (sort keys %{$hoh{$species}}){
    print "$props = $hoh{$species}{$props} ";
  }
  print "\n";
}