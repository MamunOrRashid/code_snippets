#include <bits/stdc++.h>
#define max 1000000
using namespace std;
long long int a,b,ch[max];
void show()
{
    int i;
    ch[0]=0;
    ch[1]=2;
    ch[2]=3;
    a=ch[1];
    b=ch[2];
    for(i=3;i<=44;i++)
    {
        ch[i]=a+b;
        a=b;
        b=ch[i];
    }
}
int main()
{
    int n,t;
    show();
    scanf("%d",&t);

         for(int i=1;i<=t;i++){
                scanf("%d",&n);
            if(n==0)printf("Scenario #%d:\n0\n\n",i);
            else if(n==1)printf("Scenario #%d:\n2\n\n",i);
            else if(n==2)printf("Scenario #%d:\n3\n\n",i);
            else if(n==45)printf("Scenario #%d:\n2971215073\n\n",i);
            else if(n==46)printf("Scenario #%d:\n4807526976\n\n",i);
            else if(n==47)printf("Scenario #%d:\n7778742049\n\n",i);
            else if(n==48)printf("Scenario #%d:\n12586269025\n\n",i);
            else if(n==49)printf("Scenario #%d:\n20365011074\n\n",i);
            else if(n==50)printf("Scenario #%d:\n32951280099\n\n",i);
            else printf("Scenario #%d:\n%d\n\n",i,ch[n]);
         }


    return 0;
}
