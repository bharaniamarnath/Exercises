@draws = (11,6,32,60,24,7,45);
print "Drawing third number: ", $draws[3], "\n";
print "Drawing zeroth number: ", $draws[0], "\n";
print "Replacing zeroth number...\n";
$draws[0] = 19;
print "Drawing new zeroth number: ", $draws[0], "\n";
$drawscount = $#draws;
print "Draws count: $drawscount\n";

@mdarray = (['A','B','C'], ['D','E','F'], ['G','H','I']);

print $mdarray[1][2], "\n";

$mdaref = \@mdarray;

print "$mdaref->[1][2]", "\n";