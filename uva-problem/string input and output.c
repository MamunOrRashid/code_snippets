#include<stdio.h>
int main()
{
    int line,i;
    char string[50][80];
    printf("How many line?\n");
    scanf("%d",&line);

    for(i=0;i<line;i++)
    {
        scanf("%s", string[i]);
    }
    printf("You entered:\n");
    for(i=0;i<line;i++)
    {
        puts(string[i]);
    }
    return 0;
}
