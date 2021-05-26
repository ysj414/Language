use strict;
use warnings;


my $str1 = "4G";
my $str2 = "4H";

print $str1 . $str2; #4G4H
print $str1 + $str2; #8 have two warnings
print $str1 eq $str2; #"" (빈 문자열. 즉 false)
print $str1 == $str2; #"1" have two warings

#고전적인 실수 사례
print "yes"=="no"; # "1" 즉 참. 경고가 2개 발생. 숫자로 사용되었기에 두 개 모두 0이 된다.


