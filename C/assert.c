#include<stdio.h>
#include<assert.h>
#include<string.h>

/* The assert macro is defined in the assert.h header file,
 * and stops the program when a certain condition is not met.
 * That is, if the conditional expression specified for assert
 * is false, the program stops, and if it is true, the program
 * continues execution.
 * 
 * assert(EXPRESSION)
 * if NDEBUG macro is defined, assert is ignored.
 * it is easy, think as "Normal(Correct) Condition" in assert()
 */
void copy(char *dest, char *src)
{
	assert(dest != NULL); // if dest is null, exit program
	assert(src != NULL); // if src is null, exit program
	strcpy(dest, src);
}

int main(void)
{
	char s1[100];
	char *s2 = "Hello, world!";

	copy(s1, s2);
	copy(NULL, s2); /* assert.c:17: copy: Assertion `dest != NULL' failed. */

	return 0;
}
