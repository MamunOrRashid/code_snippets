#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,check;
    while(scanf("%d",&n)==1 && n!=0){
        check=0;
        for(i=1;i<=100;i++){
            for(j=0;j<=i;j++){
                if(n==((i*i*i)-(j*j*j))){
                    check=1;
                    break;
                }
            }
            if(check==1)break;
        }
        if(check==1)printf("%d %d\n",i,j);
        else printf("No solution\n");
    }
    return 0;
}
