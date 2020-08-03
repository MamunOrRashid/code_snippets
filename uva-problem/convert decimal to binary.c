#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    char temp[100];
    scanf("%d",&a);
    char ch[100];
    itoa(a,ch,2);
    strcpy(temp,ch);
    printf("%s",temp);
    //printf("%d",ch);
    return 0;

    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d",&a);
    char ch[100];
    itoa(a,ch,10);
    puts(ch);
    return 0;

    return 0;
}*/



