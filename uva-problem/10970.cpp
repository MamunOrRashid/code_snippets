/*#include <iostream>
using namespace std;

int main()
{
    unsigned int m,n;
    while(cin>>m>>n){
        cout<<((m*n)-1)<<endl;
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int Len,LenA=3,LenB=8;
    Len = LenA > LenB ? LenA : LenB;
    printf("%d %d\n",LenA,LenB);

    return 0;
}
