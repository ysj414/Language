#펄 스크립트가 실행될 때 명령행 인자들은 내장 배열 변수(built-in array variable)인 @ARGV에 저장1
use strict;
use warnings;

my %scientists = (
		"Newton" => "Issac",
		"Einstein" => "Albert",
		"Darwin" => "Charles",
		);

#배열과 마찬가지로, 얻는 값이 스칼라이기 때문에, 해시의 원소에 접근할 때는 달러 기호($)를 사용한다.

print $scientists{"Newton"}; # "Issac"
print $scientists{"Einstein"}; # "Albert"
print $scientists{"Darwin"}; # "Charles"
print $scientists{"Dyson"}; # warnings, return undef, output ""
print "\n";

#해시는 바로 배열로 변환 할 수 있다.
#이 경우 배열은 해시의 키값과 원소값이 번갈아 나열되서 해시의 두 배 크기가 된다
#(반대로 배열을 해시로 변환하는 것도 바로 된다)
my @scientists = %scientists;

print "@scientists"; # "Einstein Albert Darwin Charles Newton Isaac"
print "\n";

my $data = "orange";
my @data = ("purple");
my %data = ("0" => "blue");


# 배열 => 대괄호[,] 해시 => 중괄호{,}
# 대괄호는 숫자 연산자, 중괄호는 문자열 연산자로 작동
# 인덱스 값으로 숫자를 쓰는지, 문자열을 쓰는지는 아무 의미가 없음
print $data; # "orange"
print $data[0]; # "purple"
print $data["0"]; # "purple"
print $data{0}; # "blue"
print $data{"0"}; # "blue"
print "\n";
