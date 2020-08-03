/**#include <stdio.h>

int main()
{
    int a=15;
    char ch[500];
    itoa(a,ch,10);
    //puts(ch);
    printf("%s",ch);
    return 0;
}*/

#include <stdio.h>

int main()
{
    int a;
    char ch[500];
    scanf("%s",ch);
    itoa(ch,a,2);
    //puts(ch);
    printf("%d",a);
    return 0;
}



