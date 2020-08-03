#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,n,i;
    scanf("%d",&n);
    a=0;
    b=1;
    int yes=0;
    for(i=1;i<=n-2;i++){ //you can not use loop n time
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}

///using recursion
/**#include <bits/stdc++.h>
using namespace std;
int fibo(int k);
int main()
{
    int k,n,p;
    int sum;
    scanf("%d",&n);
    k=0;
    sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+fibo(k);
        k++;
    }
     printf("The fibonaci value is %d\n",sum);

    return 0;
}
int fibo(int k)
{
    if(k==0)return 0;
    else if(k==1) return 1;
    else return fibo(k-2)+fibo(k-1);
}*/






