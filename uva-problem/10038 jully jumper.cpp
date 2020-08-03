#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int ch[3005],p[3005],n,k,count;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ch[i]);
        }
        if(n==1) printf("Jolly\n");
        else if(n==2 && abs(ch[0]-ch[1])!=1) printf("Not jolly\n");
        else if(n==3) printf("Not jolly\n");
        else
        {
            k=0;
            for(int i=0; i<n-1; i++)
            {
                p[k]=abs(ch[i]-ch[i+1]);
                k++;
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<=n-2; j++)
                {
                    if(p[i]>p[j])
                    {
                        int temp=p[i];
                        p[i]=p[j];
                        p[j]=temp;
                    }
                }
            }
            count=0;
            for(int t=0; t<n-1; t++) if(p[t]==p[t+1]-1) count++;

            if(count==n-2) printf("Jolly\n");
            else printf("Not jolly\n");

        }
    }
    return 0;
}
