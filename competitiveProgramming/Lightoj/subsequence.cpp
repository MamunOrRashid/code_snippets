#include <bits/stdc++.h>
using namespace std;
bool find(char a[],char b[],int m,int n)
{
    cout<<"m: "<<m<<" "<<"n: "<<n<<endl;
    if(m==0)return true;
    if(n==0) return false;

    if(a[n-1]==b[m-1])
        return find(a,b,m-1,n-1);
    return find(a,b,m,n-1);
}
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    while(scanf("%s",b))
    {
        int m,n;
        n=strlen(a);
        m=strlen(b);

        int k=find(a,b,m,n);
        if(k!=0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}
