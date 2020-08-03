#include <iostream>
using namespace std;

int main()
{
    long long int yes[85],n;
    yes[1]=1;
    yes[2]=2;
    for(int i=3;i<=85;i++){
        yes[i]=yes[i-1]+yes[i-2];
    }
    while(cin>>n){
        if(n==0)break;
        else cout<<yes[n]<<endl;
    }
    return 0;
}
