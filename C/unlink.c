#include"c_std_lib/unistd.h"
#include<stdio.h>

/* int unlink(const char* pathname);
 *
 * unlink() deletes a name from the file system.
 * If that name was the lask link to a file and no
 * processes have the file open the file is deleted
 * and the space it was using is made available for
 * reuse.
 * return value
 * 0  on Success
 * -1 on error
*/


int main(void)
{
	int ret = 0;
	char path[128]="/home/arad/ALTest/Lang/C/input.txt";
	ret = unlink(path);
	if(ret == -1)
	{
		printf("remove error\n");
		return 0;
	}
	else
	{
		printf("remove success\n");
		return 0;
	}
	return 0;
}
