#include <iostream>
#include <cstdio>
#include <cstring>
int main()
{
    char ch[205];
    int n,i,j,len,a,b,c,d,e,f,arr[6],small;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",ch);
        a=0;b=0;c=0;d=0;e=0;f=0;
        len=strlen(ch);
        for(j=0;j<len;j++){
            if(ch[j]=='M')a++;
            else if(ch[j]=='A')b++;
            else if(ch[j]=='R')c++;
            else if(ch[j]=='G')d++;
            else if(ch[j]=='I')e++;
            else if(ch[j]=='T')f++;
        }
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;
        small=arr[0];
        for(j=0;j<6;j++){
            if(small>arr[j])small=arr[j];
        }
        if(small<=a && small<=d && small<=e && small<=f && b>=3*small && c>=2*small)printf("%d\n",small);
        else printf("0\n");
    }
    return 0;
}
