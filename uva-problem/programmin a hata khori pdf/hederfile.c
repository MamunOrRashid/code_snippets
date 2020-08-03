#include <stdio.h>
#include <string.h>

int main()
{
    char *src="Take this glass";
    char ch[strlen(src)+1];
    strcpy(ch,src);
    ch[5]='X';
    printf("%s \n%s\n",src,ch);

    return 0;
}
