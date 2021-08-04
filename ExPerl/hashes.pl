%weekdays = (1 => "Sunday", 2 => "Monday", 3 => "Tuesday", 4 => "Wednesday", 5 => "Thursday", 6 => "Friday", 7 => "Saturday");
print "Fetch first hash: ", $weekdays{1}, "\n";
@weeklist = keys %weekdays;
print "Weekdays count: ", $#weeklist, "\n";
print "Fetch first key: ", $weeklist[0], "\n";