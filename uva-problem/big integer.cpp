#include <stdio.h>
#include  <string.h>

int main()
{
    int len1,len2,i,j,yes,no,temp,carry=0;
    char ch1[100],ch2[100],ch3[100],ch4[100],ch5[100];
    scanf("%s%s",ch1,ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);

    if(len1<len2)
    {
        yes=len2;
        no=len1;
        strcpy(ch4,ch1);
        strcpy(ch1,ch2);
        strcpy(ch2,ch4);
    }
    //printf("ch1: %s \nch2: %s\n",ch1,ch2);
   else
    {
        yes=len1;
        no=len2;
    }
    ch3[yes]='\0';
    for(i=yes-1,j=no-1; i>=0 || j>=0; i--,j--)
    {
        if(i<0)
        {
            ch1[i]='0';
        }
        else if(j<0)
        {
            ch2[j]='0';
        }

        temp=(ch1[i] -'0')+(ch2[j] - '0')+carry;
        ch3[i]=temp%10 + '0';
        carry=temp/10;
    }


    printf("%s\n",ch3);
    main();
    return 0;
}



