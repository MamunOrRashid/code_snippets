#include <iostream>
#include <cstdio>

int main()
{
    int i,a,b,c,d,value,L,yes;
    while(cin>>a>>b>>c>>d>>L){
        if(a==0 && b==0 && c==0 && d==0)break;
        yes=0;
        for(i=0;i<=L;i++){
            value=a*i*i+b*i+c;
            if(value%d==0)yes++;
        }
        cout<<yes<<endl;
    }

    return 0;
}
