#include <iostream>
using namespace std;

int main()
{
    int number,mas[13],need[13],i,k=0,yes;
    while(1){
        cin>>number;
        if(number<0)return 0;
        yes=number;
        for(i=0;i<12;i++){
            cin>>mas[i];
        }
         for(i=0;i<12;i++){
            cin>>need[i];
        }
        k++;
        cout<<"Case "<<k<<":"<<endl;
        //printf("Case %d:\n",k);
        for(i=0;i<12;i++){
            if(yes>=need[i]){
                yes-=need[i];
                cout<<"No problem! :D"<<endl;
            }
            else cout<<"No problem. :("<<endl;
            yes+=mas[i];
        }
    }
    return 0;
}
