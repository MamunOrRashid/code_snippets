#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,x,value;
    while(scanf("%lld%lld",&m,&x)!=EOF){
        if(m==0 && x==0) return 0;
        else if(x==100)printf("Not found\n");
        else{
            value=((100*(m-1))/(100-x));
            if (( (100*(m-1)) % (100-x) ) == 0)value--;
            if(value<m)printf("Not found\n");
            else printf("%lld\n",value);
        }
    }

    return 0;
}
