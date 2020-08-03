#include <stdio.h>
#include <string.h>

int main()
{
    char N[1009];
    int m,len,i;

    while(1)
    {
        scanf("%s",&N);
        m=0;
        len=strlen(N);
        for(i=0; i<len; i++)
        {
            m=10*m+N[i];
            m=m%11;
        }
        if(len==1) break;
        else if(m==0)printf("%s is a multiple of 11\n",N);
        else
        {
            printf("%s is not a multiple of 11\n",N);
        }
    }
    return 0;
}
