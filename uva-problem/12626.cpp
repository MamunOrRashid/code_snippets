#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;

int main()
{
    string ch;
    int n,i,j,len,a,b,c,d,e,f,arr[4],small,t,s;
    scanf("%d",&n);
    /*while(n--){
        cin>>ch;
        a=b=c=d=e=f=0;
        len=ch.length();*/
        /*for(j=0;j<len;j++){
            switch(ch[j]){
                case 'M': a++;break;
                case 'A': b++;break;
                case 'R': c++;break;
                case 'G': d++;break;
                case 'I': e++;break;
                case 'T': f++;break;
            }
        }*/

        /*arr[0]=a;
        arr[1]=d;
        arr[2]=e;
        arr[3]=f;
        small=arr[0];
        for(j=0;j<4;j++){
            if(small>arr[j])small=arr[j];
        }
        s=c/2;
        t=b/3;
        if(small<=s && small<=t)printf("%d\n",small);
        else if(s<small && s<t)printf("%d\n",s);
        else if(t<small && t<s)printf("%d\n",t);
        else printf("0\n");*/

    return 0;
}
