#include<stdio.h>
#include"noexist.h"

/* 
 Q. Does the code be compiled?
 A. Not
 this code was not compliated 
 complier prints as follows:
 
 noinclude.c:2:9: fatal error: noexist.h: No such file or directory
 #include"noexist.h"
 therefore this code is not executed.

 2021.09.16 
 When I read the imish_login_auth.c in zebos(arad), there is a header file as follows:

 #include "hostpd/dist_user_mgmt.h"
 but I couldn't find where the file was located.
 So I wondered if complie OK or not when a C file have an included-file but no exist
*/
int main(void)
{
	printf("there is no matching header file [noexist] but process execute well\n");
	return 0;
}
