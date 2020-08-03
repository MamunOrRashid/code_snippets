#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int sum,i,T,len,j;
    scanf("%d",&T);

    getchar();
    for(i=1; i<=T; i++)
    {
        gets(ch);
        len=strlen(ch);
        if(len==0)continue;
        sum=0;
        for(j=0; j<len; j++)
        {
            switch(ch[j])
            {
            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':
            case ' ':
                sum=sum+1;
                break;
            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':
                sum=sum+2;
                break;
            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                sum=sum+3;
                break;

            case 's':
            case 'z':
                sum=sum+4;
                break;

            }
        }
        printf("Case #%d: %d\n",i,sum);
    }

    return 0;
}
