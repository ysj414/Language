use strict;
use warnings;

my $colour = "Indigo";
my $scalarRef = \$colour;

print $colur;
print $scalarRef;
print ${ $scalarRef };

#모호한 점 없이 결과가 명확하다면 중괄호를 생략가능
print $$scalarRef;

my @colours = ("Red", "Orange", "Yellow", "Green", "Blue");
my $arrayRef = \@colours;

print $colours[0];
print ${ $arrayRef }[0];
print $arryRef->[0];

my %atomicWeights = ("Hydrogen" => 1.008, "Helium" => 4.003,
		"Manganese" => 54.94);

my $hashRef = \%atomicWeights;

print $atomicWeights{"Helium"};
print ${ $hashRef }{"Helium"};
print $hashRef->{"Helium"};


