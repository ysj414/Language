#include<iostream>
#include<string> /* Have to include to use string object */

using namespace std;



/* 
 * Construct type
 * string s 기본 생성자로 s 생성
 * string s(str) str 문자열로 s 생성
 * string s(str,n) str 문자열에서 n개의 문자로 s를 생성
 * string s(n,c)  n개의 c문자로 s를 생성
 * string s(iter1,iter2) iterator 구간 [iter1,iter2)의 문자로 s를 생성
 * string s(p1,p2) 포인터 구간 [p1,p2)의 문자로 s를 생성
 * Reference :https://ddoublej.tistory.com/237
*/

int main(void)
{


	string t("Hello!");
	const char* p1 = "Hello";
	const char* p2 = p1+6;

	string s1;
	string s2("Hello!");
	string s3("Hello!",5);
	string s4(5,'H');
	string s5(t.begin(), t.end());
	string s6(p1,p2);


	cout<< "s1()\t\t: "<<s1<<'\n';
	cout<< "s2(str)\t\t: "<<s2<<'\n';
	cout<< "s3(str,n)\t: "<<s3<<'\n';
	cout<< "s4(n,c)\t\t: "<<s4<<'\n';
	cout<< "s5(iter1,iter2) : "<<s5<<'\n';
	cout<< "s6(p1,p2)\t: "<<s6<<'\n';

	return 0;
}
