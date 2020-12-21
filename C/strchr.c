#include<stdio.h>
#include"c_std_lib/string.h" /* use my library strchr header in here */


int main(void)
{
	char s1[30] = "A Garden Diary"; // size 30 char type array declare and assign string
	char *ptr = strchr(s1, 'a');  // search 'a' staring string, return pointer

	/* result : arden Diary
	 * 		   ary 
	 */

	char s2[30] = "10.1.10.188"; // my computer local IP address
	char *ptr2 = strchr(s2, '.');
	/* result : .1.10.188
	 *          .10.188
	 *			.188
	 */

	while (ptr2 != NULL)   
	{
		printf("%s\n", ptr2);
		ptr2 = strchr(ptr2+1, '.');

	}

	return 0;


}
