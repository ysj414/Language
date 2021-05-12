#include<string.h>
#include<unistd.h>

int urlencode(char *dest, char *source)
{
        char hex[4];
        int size=0;

        while(*source)
        {
                 if ((*source > 47 && *source < 57) ||
                                 (*source > 64 && *source < 92) ||
                                  (*source > 96 && *source < 123) ||
                                  *source == '-' || *source == '.' || *source == '_')
                         *dest = *source;
                 else
                 {
                          sprintf(hex, "%%%02X", *source);
                          strncat(dest, hex,3);
                          dest += 2;
                          size += 2;
                 }
                 source++;
                 dest++;
                 size++;
        }
        return size;
}

int main(void)
{
        char input[100]="arad123$";
        char buf[150];
		int length;
        length = urlencode(buf,input);
        printf("%d %s\n",length,buf);


        return 0;
}
