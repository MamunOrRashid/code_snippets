#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,n,ch[25],temp,j,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&ch[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(ch[i]>ch[j])
                {
                    temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
            }
        }
        printf("%d\n",(ch[n-1]-ch[0])*2);
    }

    return 0;
}

