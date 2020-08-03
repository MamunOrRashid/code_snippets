#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[10];
    int t,len,sum_1,sum_2,k,p;
    scanf("%d",&t);
    while(t--){
        scanf("%s",ch);

        sum_1=26*26*(ch[0]-'A')+26*(ch[1]-'A') + (ch[2]-'A');
        sum_2=(ch[4]-'0')*1000 + (ch[5]-'0')*100 + (ch[6]-'0')*10 + (ch[7]-'0');
       // printf("%d",sum_2);
       if(abs(sum_1 - sum_2)<=100)printf("nice\n");
        else printf("not nice\n");
    }

    return 0;
}
