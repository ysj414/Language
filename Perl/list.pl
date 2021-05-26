use strict;
use warnings;

(
  "print",
  "these",
  "strings",
  "out",
  "for",
  "me",
  )

(
 "Newton" => "Isaac",
 "Einstein" => "Albert",
 "Darwin" => "Charles",
 )


("one", 1, "three", 3, "five", 5)
("one" =>1, "three"=> 3, "five" => 5)

#리스트 중첩

my @array = (
		"apples",
		"bananas",
		(
		 "inner",
		 "list",
		 "serveral",
		 "entries",
		),
		"cherries",
		);

print $array[0];
print $array[1];
print $array[2];
print $array[3];
print $array[4];
print $array[5];
print $array[6];


# same result

my $hash = (
		"beer" => "good",
		"bananas" =>(
			"green" => "wait",
			"yellow" => "eat",
			),
		);

#위의 경우 경고가 발생한다. 해시가 7개의 요소로 선언되기 때문이다.

print $hash{"beer"};
print $hash{"bananas"};
print $hash{"wait"};
print $hash{"eat"};    #undef, warning, output ""
