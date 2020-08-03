#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n,value[1000],i,j,yes;
    char ch[11][104];
    scanf("%d",&n);
    yes=0;
    for(i=1;i<=n;i++){
        for(j=0;j<10;j++){
            scanf("%s%d",ch[j],&value[j]);
            if(value[j]>yes)yes=value[j];

        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++){
            if(value[j]==yes)printf("%s\n",ch[j]);
        }
    }
    return 0;
}
