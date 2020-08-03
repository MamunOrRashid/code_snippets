#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned int a,b,c,suma,sumb,sumc;
    while(cin>>a>>b>>c && a!=0 && b!=0 && c!=0){
        sumc=pow(a,2)+pow(b,2);
        suma=pow(b,2)+pow(c,2);
        sumb=pow(c,2)+pow(a,2);
        if(sumc==c*c ||sumb==b*b||suma==a*a)cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
    return 0;
}
