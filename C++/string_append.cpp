#include<iostream>
#include<string>

using namespace std;

/*
 * Usage of member function in string object  
 * s.append(str) s 뒤에 str 추가
 * s.append(str,offset, n) s 뒤에 offset부터 n개의 문자 추가
 * s.append("abcd") string abcd를 직접추가
 * s.append(str,n) s 뒤에 str의 시작부터 n개의 문자 추가
 * s.append(iter1, iter2) s 뒤에 iter1이 가리키는 곳부터 iter2가 가리키는 곳까지의 문자 추가
 * s.append(p1,p2) s 뒤에 p1이 가리키는 곳부터 p2가 가리키는 곳까지의 문자 추가
 * s.appned(n ,c) s 뒤에 c문자를 n번 추가
 * s+=str s뒤에 str 추가(연산자 오버로딩 형태)
 * s+="abcd" s뒤에 string abcd를 직접추가
 * s.push_back(c) s 뒤에 string c 추가
 */

int main(void)
{
	string s1("Hello");
	string s2("Hello");
	string s3("Hello");
	string s4("Hello");
	string s5("Hello");
	string s6("Hello");
	string s7("Hello");
	string s8("Hello");
	string s9("Hello");
	string s10("Hello");

	string t(" string!");
	const char* p1 = " string!";
	const char* p2 = p1+8;

	s1.append(t);
	s2.append(t,0,4);
	s3.append(" string!");
	s4.append(" string!",5);
	s5.append(t.begin(), t.end());
	s6.append(p1,p2);
	s7.append(5, 's');
	s8+= t;
	s9+= " string!";

	for( string::iterator it= t.begin(); it != t.end(); it++)
		s10.push_back((*it));

	cout<<"s1.append(s)\t\t:"<<s1<<'\n';
	cout<<"s2.append(s,off,n)\t:"<<s2<<'\n';
	cout<<"s3.append(str)\t\t:"<<s3<<'\n';
	cout<<"s4.append(str,n)\t:"<<s4<<'\n';
	cout<<"s5.append(iter1,iter2)\t:"<<s5<<'\n';
	cout<<"s6.append(p1,p2)\t:"<<s6<<'\n';
	cout<<"s7.append(n,c)\t\t:"<<s7<<'\n';
	cout<<"s8+=s\t\t\t:"<<s8<<'\n';
	cout<<"s9+=str\t\t\t:"<<s9<<'\n';
	cout<<"s10.push_back(c)\t:"<<s10<<'\n';

	return 0;
}

