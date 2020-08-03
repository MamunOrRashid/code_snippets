#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,sum=0,yes,p,cout=0;
    scanf("%d",&n);
    yes=(n+1)/2;
    for(int i=1,p=1;i<=yes;i++){
        sum=sum+i;
        if(sum==n){
            cout++;
        }
        if(i==yes){
            p++;
            i=p;
            sum=0;
        }
    }
    printf("%d\n",cout+1);
    main();
    return 0;
}
