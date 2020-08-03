#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,n,yes,check,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
            yes=1;
            check=(int)(n/2)+1;
           for(i=2;i<check;i++){
                if(check%i==0){
                    check++;
                     yes=0;
                    i=2;
                }
            }
           if(yes==0) printf("%d\n",check);
           else if(yes==1) printf("%d\n",check);


    }
    return 0;
}
