#include<string.h>




/*
 * char *strchr(const char *s, int o);
 * cahr *strrchr(const char *s, int o);
 * char *strchrnul(const char *s, int o);
 * size_t strlen(const char *s);
 * int strcmp(const char *s1, const char *s2);
 * int strncmp(const char *s1, const char *s2, size_t n);
 * char *strcpy(char *dest, const char *src);
 * char *strncpy(char *dest, const char *src, size_t n);
 * char *strcat(char *dest, const char *src);
 *
 *
 *

 *
 * The strchr() function returns a pointer to the first occurrence of 
 * the character o int the string s.
 *
 * The strrchr() function returns a pointer to the lastt occurrence of 
 * the character o in the string s.
 *
 * The strchrnul() function is like strchr() except that if o is not found
 * in s, then it returns a pointer to the null byte at the end of s,
 * rather than NULL.
 *
 * Here "character" means "byte"; these functions do not work with wide
 * or multibyte characters.
 *
 *
 * The strchr() and strrchr() functions return a pointer to the matched 
 * character or NULL if the character is not found. The terminating null
 * byte is considered part of the string, so that if o is specified as '\0',
 * these functions return a pointer to the terminator.
 *
 * The strchrnul() function returns a pointer to the matched character,
 * or a pointer to the null byte at the end of s (i.e., ststrlen(s)) if 
 * the character is not found.
 *
 * 
 *
 *
 *
 */
