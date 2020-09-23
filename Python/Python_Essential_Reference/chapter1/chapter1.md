#
1장 파이썬 맛보기

소목차
1.1 파이썬 실행하기
1.2 변수와 산술 표현식
1.3 조건문
1.4 파일 입력과 출력
1.5 문자열
1.6 리스트
1.7 튜플
1.8 집합
1.9 사전
1.10 반복과 루프
1.11 함수
1.12 생성기
1.13 코루틴
1.14 객체와 클래스
1.15 예외
1.16 모듈
1.17 도움 얻기



1.1 파이썬 실행하기

파이썬 프로그램은 인터프리터에 의해 실행
인터프리터는 보통 명령 셸에서 python을 입력해 실행
여러 종류의 인터프리터 존재 ex)Jython, IronPython, IDLE, ActivePython, Wing IDE, pydev etc.)
인터프리터 실행후 >>> 명령 프롬프트 나타남
최종연산결과저장 변수: _

유닉스 파이썬 파일
#!/usr/bin/ev python
EOF = Ctrl+D  Ctrl+Z(Window)
syntax 예외 발생시켜 종료 할때
raise SystemExit

1.2 변수와 산술 표현식

코드 참조

1.3 조건문

if a < b:
	print "Computer says Yes"
else:
	print "Computer says No"

if a < b:
	pass # 아무 일도 안함
키워드 or, and로 불리언 표현식을 만들 수 있음
if product == "game" and type == "pirate memory" \
			and not (age < 4 or age > 8):
	print "I'll take it!"
\ => 문장 이어주기
파이썬에는 switch case 문이 따로 없으므로 조건이 여러개 일때는 elif문 이용
진리값은 불리언 값인 True/False로 표현
if 'spam' in s:
	has_spam = True
else:
	has_spam = False
좀 더 간단히는
	has_spam = 'spam' in s

1.4 파일 입력과 출력

f = open("foo.txt")
line = f.readline()
while line:
	print line,
	#print(line, end=' ') python3
	line = f.readline()
f.close()

open() : 새 파일 객체 반환
readline() : 입력으로부터 끝의 줄바꿈 문자를 포함한 한 줄을 읽음

1.5 문자열

문자열 표현 방식
a = "Hello World"
b = 'Python is groovy'
c = """Computer says 'No'"""

삼중따옴표는 종료를 알리는 삼중따옴표가 나오 전가지의 모든 텍스트를 포함할 수 있음
삼중따옴표는 여러 줄에 걸친 문자열 상수를 생성할 때 주로 쓰임
ex)
	print '''Content-type: text/html
	<h1>Hello World</h1>
	Click<a href="http://www.python.org"><here></a>.
	'''
문자열 인덱스 0부터 시작, 색인 연산자 표현 : s[i] 
	a = "Hello World"
	b = a[4]  # b = 'o'

부분문자열을 얻으려면 분할연산자 s[i:j]를 사용
s[i:j]는 범위가 (i <= k < j) 인 모든 문자열 추출
생략된 색인은 문자열의 시작이나 끝으로 취급
c = a[:5] #c = "Hello"
d = a[6:] #d = "World"
e = a[3:8] #e = "lo Wo"
+ 연산자 : 문자열 연결
g = a + " This is a test"
파이썬은 문자열의 내용을 숫자 데이터로 해석하지 않음 (diffent with Perl, PHP)
x = "37"
y = "42"
z = x + y # z = "3742"

z = int(x) + int(y) #z = 79
문자열이 아닌 값은 str(), repr(), format() 함수를 사용해 문자열 표현으로 변환 할 수 있음
s = "The Value of x is " + str(x) 
s = "The Value of x is " + repr(x)
s = "The Value of x is " + format(x, "4d")

1.6 리스트

리스트는 임의의 객체의 순서열.
names = [ "Dave", "Mark", "Ann", "Phil" ]
리스트 index는 0부터 시작 접근은 색인연산자 이용
a = names[2]   # "Ann" 반환
names[0] = "Jeff" # 첫번째 항목을 "Jeff"로 교체
names.append("Paula") # 끝에 새로운 항목 추가
names.insert(2, "Thomas") #임의의 위치에 항목 추가
b = names[0:2] #[ "Jeff", "Mark" ] 반환 why??? 문자열에서 색인의 정의를 보면 s[0:2]의 경우 [0,2)로 표현가능
c = names[2:]
names[1] = 'Jeff'
names[0:2] = [ 'Dave','Mark','Jeff' ]
리스트 연결: 마찬가지로 + 연산자
빈 리스트 생성
names = []
names = list()

리스트 중첩(어떤 파이썬 객체든지 담을 수 있음)
a = [1,"Dave", 3.14, ["Mark", 7, 9, [100,101]], 10]
a[1] # "Dave"
a[3][2] # 9
a[3][3][1] # 101

1.7 튜플

튜플을 사용하면 값들을 단일 개체에 끼워 넣음으로써 간단한 데이터 구조를 생성할 수 있음
stock = ('GOOG', 100, 490.10)
address = ('www.python.org', 80)
person = (first_name, last_name, phone)

괄호가 생략된 경우에도 튜플로 인식

stock = 'GOOG', 100, 490.10
address = 'www.python.org', 80
person = first_name, last_name, phone

name, shares, price = stock
host, port = address
first_name, last_name, phone = person

1.8 집합

집합(set)은 객체들의 순서 없는 모음을 담는데 사용

s = set([3,5,9,10])
t = set("Hello")

리스트나 튜플과는 달리, 집합은 순서가 없기 때문에 숫자로 색인될 수 없음
그리고 집합의 요소가 중복되지 않음

a = t | s #t와 s의 합집합
b = t & s #t와 s의 교집합
c = t - s #차집합
d = t ^ s #대칭 차집합

t.add('x') # 아이템 하나추가
s.update([10,37,42]) #여러 아이템 추가
t.remove('H')

1.9 사전

사전은 키로 색인되는 객체들을 담는 연관 배열 혹은 해시 테이블
중괄호로 둘러싸서 사전을 생성
stock = {
	"name"   : "GOOG",
	"shares" : 100,
	"price"  : 490.10
}
사전의 요소에 접근하려면 다음과 같이 키 색인 연산자를 사용

name = stock["name"]
value = stock["share"]*stock["price"]

객체 추가 및 수정

stock["share"]=75
stock["date"]="June 7, 2007"

주로 문자열이 키로서 사용되지만, 숫자나 튜플 같은 다른 파이썬 객체도 키로 사용될 수 있음
리스트나 사전 같이 그 내용이 바귈 수 있는 객체는 키로 사용할 수 없음
사전은 이름 있는 필드들로 구성되는 객체를 정의하는데 유용하게 쓰임
하지만 사전은 순서 구분 없는 데이터를 빠르게 검색하기 위한 용도의 컨테이너로도 사용
ex) 주가를 담는 사전
prices = {
	"GOOG" : 490.10,
	"AAPL" : 123.50,
	"IMB"  : 91.50,
	"MSFT" : 52.13,
}

빈 사전 만드는 방법
prices = {}
prices = dict{}

사전에 어떤 키가 들어있는지는 다음과 같이 in 연산자로 검사
if "SCOX" in prices:
	p = prices ["SCOX"]
else:
	p =0.0

사전은 파이썬 인터프리터에서 가장 섬세하게 튜닝된 데이터 타입
따라서, 만약 데이터를 저장하고 작업을 하려는 것이라면 직접 자신만의 데이터 구조를 만들기 보다는 사전을 사용하는 것이
대부분의 경우 훨씬 낫다.

1.10 반복과 루프

for문
가장 널리 사용되는 반복의 형태는 문자열,리스트,튜플 같은 순서열의 모든 구성요소에 대해 루프를 도는 것
for n in [1,2,3,4,5,6,7,8,9]:
	print "2 to the %d power is %d" %(n, 2**n)
앞의 예에서, 변수 n에는 간 반복마다 리스트 [1,2,3,4,...9]에 있는 다음 항목이 할당
정수 범위에 대해 루프를 도는 일은 상당히 잦으므로 다음과 같은 간단한 방법이 제공됨

for n in range(1,10):
	print "2 to the %d power is %d" % (n, 2**n)

range(i, j [,보폭]) 함수는 i에서 j-1까지의 값을 가지는 정수 범위를 표현하는 객체를 생성
초기 값이 생략되면 0. 추가로 세 번째 인수로 보폭을 지정할 수 있음
a = range(5)
b = range(1,8)
c = range(0,14,3)
d = range(8,1,-1)

range()함수와 관련해 한 가지 주의할 것은 이 함수가 모든 값으로 완전히 채워진 리스트를 생성한다는 점
매우 큰 범위를 지정하면 의도하지 않게 메모리를 다 소진할 수 있음
따라서 오래된 파이썬 코드에서는 대안 함수인 xrange()가 사용되는 것을 볼 수 있음
for i in xrange(1000000000): # i = 0,1,2,...99999999
xrange()에 의해 생성되는 객체는 검색이 요청되는 시점에 값을 계산
이러한 이유로 매우 큰 정수 범위를 표현할 대는 xrange()를 사용하는 것이 좋다
파이썬3에서는 xrange()함수의 이름이 range() 함수로 변경 이전 range()함수는 제거

a = "Hello World"
for c in a:
	print c
b = ["Dave", "Mark", "Ann", "Phil"]
for name in b:
	print name
c = { 'GOOG' : 490.10, 'IBM' : 91.50, 'AAPL' : 123.15 }
for key in c:
	print key, c[key]

f = open("foo.txt")
for line in f:
	print line,

1.11 함수

함수는 def문을 사용해 생성

def remainder(a,b):
	q = a//b # // => 끝수를 버리는 나누기
	r = a - q*b
	return r

튜플을 사용해 여러 값을 반환할 수도 있음

def divide(a,b):
	q = a//b
	r = a-q*b
	return (q,r)

quotient, remainder = divide(1456,33)

함수 인수에 기본 값을 할당하려면 대입문을 사용

def connect(hostname, port, timeout=300):

함수 정의에 기본 값이 주어지면 이어지는 함수 호출에서 해당 값을 생략할 수 있음

connect('www.python.org', 80)

키워드 인수를 사용하면 임의의 순서로 인수들을 넘겨주면서 함수를 호출할 수 있음
하지만 이를 위해서 함수 정의에서 사용된 인수의 이름을 알고 있어야 함

connect(port=80, hostname = "www.python.org")

함수 안에서 변수가 생성되거나 값이 대입되면 이 변수의 유효범위는 지역범위
함수 안에서 전역 변수의 값을 수정하려면 다음과 같이 global 문을 사용

count = 0

def foo():
	global count
	count += 1

1.12 생성기

함수는 단일 값을 반환하는 대신, yield문을 사용해 일련의 결과 값을 생성할 수도 있음

def countdown(n):
	print "Counting down!"
	while n > 0 :
	yield n
	n -= 1
yield를 사용하는 함수를 생성기(generator)라고 부름.  생성기 함수를 호출하면, next() 메서드를 반복적으로
호출할 때 일련의 결과를 반환하는 객체가 생성됨 

next()를 호출하면, 생성기 함수는 다음 yield문에 도달할 때까지 실행됨. 이때, yield에 전달된 값이 next()에 의해 반환되고
생성기 함수는 실행이 잠시 중지됨.  next()가 다시 호출되면, 함수가 yield문 바로 다음 문장부터 다시 실행됨. 이 과정은 함수가 반환될 때까지 계속됨
생성기는 처리 파이프라인, 스트림, 데이터 흐름에 기반한 프로그램을 작성할 때 강력한 위력을 발휘함.

1.13 코루틴

보통 함수는 입력으로 주어진 인수에 대해서 한 번만 실행됨. 하지만, 일련의 입력을 처리하도록 함수를 작성할 수도 있음.
이런 종류의 함수를 코루틴(coroutine)이라고 하고, 다음 예처럼 yield문을 표현식(yield)형태로 사용해 생성

def print matches(matchtext):
	print "Looking for", matchtext
	while True:
		line = (yield)
		if matchtext in line:
			print line
코루틴은 프로그램의 한 곳에서 생성된 데이터를 다른 곳에 소비하는 생성자 소비자 모델에 기반한 병행 프로그램을 작성할 때
유용하게 쓰인다. 

1.14 객체와 클래스

객체(object)는 내부 데이터와 내부 데이터와 연관된 다양한 연산을 수행하는 메서드로 구성됨
앞서 이미 문자열과 리스트 같은 내장 타입을 다루면서 객체와 메서드를 사용해봄

dir() 함수는 객체가 제공하는 메서드들을 나열
이 함수는 대화식으로 이것저것 실험해보는 데 유용하게 쓰임

class문은 새로운 객체 타입을 정의하며 객체지향 프로그램을 작성하는 데 쓰임

다음 클래스는 push(), pop(), length() 연산자를 갖는 간단한 스택을 정의

class Stack(object):
	def __init__(self):
		self.stack = [ ]
	def push(self, object):
		self.stack.append(object)
	def pop(self):
		return self.stack.pop()
	def length(self):
		return len(self.stack)

파이썬에서는 괄호로 상속 관계를 기술
앞에서는 Stack이 모든 파이썬 타입의 루트인 object로부터 상속을 받음
클래스 정의에서 메서드는 def문으로 정의
각 메서드의 첫 번째 인수는 항상 객체 자기 자신을 가리킴
관습적으로 이 인수의 이름으로 self를 사용
객체의 속성과 관련된 연산에서는 명시적으로 self변수를 참조해야함
시작과 끝이 이중 밑줄인 메서드는 특수 메서드
예를 들어, __init__은 객체가 생성된 후 초기화를 위해 사용

s = Stack()
s.push("Dave")
s.push(42)
s.push([3,4,5])
x = s.pop()
y = s.pop()
del s

1.15 예외

프로그램에서 에러가 발생하면 예외가 발생하고 역추적 메시지가 나타남
역추적 메시지는 발생된 에러의 종류와 위치를 표시
보통 에러는 프로그램을 종료시킴 하지만, try와 except문으로 예외를 잡아서 처리할 수 있음

try:
	f = open("file.txt","r")
except IOError as e:
	print e

IOError가 발생하면, 에러의 원인에 대한 내용이 e에 담기고 except 블록으로 제어가 넘어감
또다른 예외가 발생하면 에워싼 코드 블록으로 제어가 남어감
아무런 에러도 발생하지 않으면 except 블록에 있는 코드는 무시됨

1.16 모듈

모듈을 생성하려면 관련 문장과 정의들을 모듈과 동일한 이름을 가지는 파일에 넣으면 됨(파일 확장자가 .py)
 # file : div.py
def divide(a,b) :
	q = a/b
	r = a - q*b
	return (q,r)
이 모듈을 다른 프로그램에서 사용하려면 import 문을 이용
import div

	a,b = div.divide(2305, 29)
import문은 새로운 네임스페이스를 생성하고 .py 파일 안에 있는 모든 문장을 이 네임스페이스 안에서 실행
해당 네임스페이스 안에 있는 내용에 접근하려면 앞의 예의 div.divide()처럼 간단히 모듈의 이름을 앞에 붙여주면 됨
모듈을 다른 이름으로 임포트하고 싶으면 다음과 같이 import문에 선택적인 as한정어를 써주면 됨

import div as foo
a,b = foo.divide(2305,29)

특정 정의를 현재 네임스페이스에 임포트하려면 from문을 사용하면 됨
from div import divide
a,b = divide(2305,29) # div 접두어가 더 이상 필요 없음

모듈의 모든 내용을 현재 네임스페이스로 가져오기
from div import *

1.16 도움 얻기

파이썬을 대화식 모드로 실행하고 있을 때는 help() 명령을 사용해서 내장 모듈이나 기타 파이썬의 기능에 관한 정보를 얻을 수 있음
help(), help('모듈이름') 입력
파이썬 함수는 대부분 사용법을 설명하는 문서화 문자열을 지님
이를 출력하려면 간단히 __doc__ 속성을 출력하면 됨
파이썬 모듈에 대한 문서화를 얻는 데 사용할 수 있는 pydoc 명령 제공



