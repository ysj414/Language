#include<stdio.h>


/*
 * char* fgets(char* str, int num, FILE* stream);
 * fgets received string in the stream.
 * Whenever it received the number of (num-1) characters or until EOF.
 * Then fgets stored string in type of C. 
 * The character '\n' ends fgets and was stored in str.
 * The character '\0' add in the end of string.
 *
 *
 * fgets has a big difference with scanf, cin in C,C++ because cin,scanf end if they meet ' ','\t'.
 * but fgets can get these characters.
 * 
 * Reference : https://modoocode.com/38
 * I used this function baekjoon problem 1152.cpp
 */


int main(void)
{
	char str[100];
	fgets(str,100,stdin);
	printf("read string: %s\n",str);

	return 0;
}
