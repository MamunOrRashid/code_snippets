#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int count;
    while(scanf("%c",&ch)==1)
    {
        if(isalnum(ch))
        {
            count=0;
            while(isdigit(ch))
            {
                count=count+(ch-'0');
                ch=getchar();
            }
            if(ch=='b'){
                for(int i=1;i<=count;i++)printf(" ");
            }
            else for(int i=1;i<=count;i++)printf("%c",ch);
        }
        else if(ch=='!')printf("\n");
        else printf("%c",ch);
    }
    return 0;
}
