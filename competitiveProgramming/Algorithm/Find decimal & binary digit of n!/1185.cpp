#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        ///sum=sum+log10(i); //you can devide by log10(2) to convert into base 2;
        sum=sum+log10(i)/log10(2);
    }
    return (int)(sum)+1; //or use ceil(sum);
}
int main()
{
    int t,n;
    double sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0.0;
         ///printf("Decimal digit %d\n",factorial(n));
         printf("Decimal binary digit %d\n",factorial(n));
    }

    return 0;
}

