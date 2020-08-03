#include <iostream>
#include <cstdio>
#include <cstring>
#define max 100000
using namespace std;
int len1,len2,i,j,k,check;

int main()
{
    char ch1[max],ch2[max],temp[max];

    while(scanf("%s%s",ch1,ch2)!=EOF)
    {

        len1=strlen(ch1);
        len2=strlen(ch2);
        k=0;
        j=0;
        for(i=0; i<len1; i++)
        {
            for(; j<len2; j++)
            {
                if(ch1[i]==ch2[j])
                {
                    temp[k]=ch2[j];


                    k++;
                    j++;
                    break;
                }
            }
        }
        temp[k]='\0';
        int count=0;
        for(i=0; i<len1; i++)
        {
            if(ch1[i]==temp[i])count++;
        }

        if(len1==count) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
