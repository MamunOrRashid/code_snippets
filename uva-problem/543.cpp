#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{

    int n,i,j,k,yes,ch[10000];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        k=0;
        for(i=3; i<=n; i++)
        {
            yes=0;

            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    yes=1;
                    break;
                }
            }
            if(yes==0)
            {
                ch[k]=i;
                //printf("%d\n",ch[k]);
                k++;
            }

        }
        int i,j,count=0,check[10000],ma[10],v,w=0;
        //  printf("%d",k);
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                if(ch[i]>ch[j])
                {
                    int temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
            }
        }
        v=0;
        for( i=0; i<k; i++)
        {
            for( j=i+1; j<k; j++)
            {
                if((ch[i]+ch[j])==n)
                {
                    check[w]=ch[i];
                    check[++w]=ch[j];
                    printf("%d\n",abs((ch[0]-ch[1])));
                    ma[v]=abs(ch[j]-ch[i]);
                    printf("%d %d\n",ch[i],ch[j]);
                    v++;
                    count++;
                }
            }
        }
        // if(count==1)printf("%d = %d + %d",n,check[0],check[1]);
        /**if(count==2)
        {
            if(ma[0]<ma[1])printf("%d = %d + %d",n,check[0],check[1]);
            else
            {
                if(abs(check[0]-check[1])>abs(check[2]-check[3]))
                {
                    printf("%d = %d + %d",n,check[0],check[1]);
                }
                else
                    printf("%d = %d + %d",n,check[2],check[3]);
            }
            //printf("%d\n",count);

        }*/

    }
    return 0;
}
