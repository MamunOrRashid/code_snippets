#include <stdio.h>
#include <string.h>
int main()
{
    char ch[205];
    int n,i,j,len,a,b,c,d,e,f,arr[6],small,t,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",ch);
        a=0;b=0;c=0;d=0;e=0;f=0;
        len=strlen(ch);
        for(j=0;j<len;j++){
            switch(ch[j]){
                case 'M': a++;break;
                case 'A': b++;break;
                case 'R': c++;break;
                case 'G': d++;break;
                case 'I': e++;break;
                case 'T': f++;break;
            }
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
        s=c/2;
        t=b/3;
        if(small<=s && small<=t)printf("%d\n",small);
        else if(s<small && s<t)printf("%d\n",s);
        else if(t<small && t<s)printf("%d\n",t);
        else printf("0\n");
    }
    return 0;
}
