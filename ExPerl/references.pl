@nums = (10,20,30,40,50);

$aref = \@nums;

print @nums[0], "\n";

print @{$aref}[0], "\n";

@revnums = reverse @{$aref};

print @revnums[0], "\n";

%fruits = ('apple' => 5, 'orange' => 4, 'strawberry' => 3, 'grape' => 2, 'cherry' => 1);

$href = \%fruits;

for $i (keys %{$href}){
  print "$i is ${$href}{$i} dollars each", "\n";
}

for my $key (keys %{$href}){
  print "$key => ${$href}{$key}\n";
}

print $aref->[2], "\n";
print $href->{'orange'}, "\n";

@mdarray = (
	    [1, 2, 3],
	    [4, 5, 6],
	    [7, 8, 9]
	   );

print $mdarray[0]->[2], "\n";