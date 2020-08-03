#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

char ch[102][17];
int n,p[1800000];
void show()
{
    int i,big,small,t1,t2,d,m,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%d%d%d",ch[i],&d,&m,&y);
        p[i]=(10000-y)*360 + (12-m)*30 -d;
    }
    big=p[0];
    small=p[0];
    for(i=1;i<n;i++){
        if(p[i]>big){
            big=p[i];
            t1=i;
        }
        if(p[i]<small){
            small=p[i];
            t2=i;
        }
    }
    printf("%s\n%s\n",ch[t2],ch[t1]);
}

int main()
{
    show();
    return 0;
}
