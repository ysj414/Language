use strict;
use warnings;

my $undef = undef;
print $undef; # 경고가 발생하며 빈 문자열을 출력한다.

# 묵시적인 undef

my $undef2;
print $undef2; # 위와 같은 경고 출력

my $num = 4040.5;
print $num; # "4040.5"

my $string = "world\n";
print $string; # "world"

#문자열 결합은 . 연산자로 한다(PHP와 같다)

print "Helo ".$string; #"Hello world"
