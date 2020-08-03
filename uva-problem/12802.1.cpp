#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,check,y1=0,y2=0,rev;
    while(1)
    {
        cin>>n;
        check=n;
        if(n==0)cout<<"0"<<endl;
        if(n==1 || n==2 || n==3 || n==5 || n==7)
        {
            cout<<n*2<<endl;
            break;
        }
        else
        {
            rev=0;
            while(n!=0)
            {
                rev=rev*10+n%10;
                n=n/10;
            }

            if(rev!=check) cout<<check*2<<endl;

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
                else if(y1!=1) y2=1;
            }
            if(y2==1)
            {
                cout<<check*2<<endl;
                break;
            }
        }
    }
    return 0;
}
