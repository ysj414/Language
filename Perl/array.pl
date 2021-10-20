use strict;
use warnings;

my @array = (
		"print",
		"these",
		"strings",
		"out",
		"for",
		"me", #마지막에 쉼표가 있어도 문제없다
		);

#배열에서 각각의 원소값에 접근하려면 달러 기호($)를 사용해야 한다.
#얻는 값이 배열이 아니고 스칼라이기 때문에 이렇게 하는 것이다.

print $array[0]; # "print"
print $array[1]; # "these"
print $array[2]; # "strings"
print $array[3]; # "out"
print $array[4]; # "for"
print $array[5]; # "me"
print $array[6]; # 경고 발생, undef 반환, ""가 출력됨

#배열의 마지막 원소부터 앞쪽으로 세면서 인덱스를 지정하려면 음수를 사용한다:

print $array[-1]; # "me" 
print $array[-2]; # "for"
print $array[-3]; # "out"
print $array[-4]; # "strings"
print $array[-5]; # "these"
print $array[-6]; # "print"
print $array[-7]; # 경고 발생, undef 반환, ""가 출력됨

print "\n";
print @ARGV;
print "\n";
print $ARGV[0];
print $ARGV[-1];

#배열의 길이를 구하려면 다음과 같이 한다:

print "This array has ".(scalar @array)."elements\n"; # "This array has 6 elements"
print "The lat populated index is ".$#array; # "The last populated index is 5"

