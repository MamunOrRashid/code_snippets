#include <iostream>
#include <cmath>
using namespace std;
int n;
void rever()
{
    int rev,check,y1=0;
        rev=0;
        check=n;
    while(check!=0)
    {
        rev=rev*10+check%10;
        check=check/10;
    }
    if(rev!=n) cout<<check*2<<endl;
    else
    {
        for(int i=2; i<=(int)sqrt(check); i++)
        {
            if(check%i==0){
                y1=1;
                break;
            }
        }
        if(y1==1)cout<<check*2<<endl;
        else{
            cout<<check*2<<endl;
            break;
        }
    }
}
int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)cout<<"0"<<endl;
        if(n==1 || n==2 || n==3 || n==5 || n==7)
        {
            cout<<n*2<<endl;
            break;
        }
        rever();
    }

    return 0;
}
