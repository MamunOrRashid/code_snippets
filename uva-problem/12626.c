#include <stdio.h>
#include <string.h>

int main()
{
    int N,i,j,count,x1,x2,x3,x4,x5,x6,q,w[7],s,k,small;
    char ch[600],p[600];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",ch);
        count=0;
        s=0;
        for(j=0;ch[j]!='\0';j++){
            if(ch[j]=='M' || ch[j]=='A' || ch[j]=='R' || ch[j]=='I' || ch[j]=='T' || ch[j]=='G'){
                p[s]=ch[j];
                count++;
                s++;
            }
        }

       x1=0;x2=0;x3=0;x4=0;x5=0;x6=0;
        for(j=0;j<count;j++){
            if(p[j]=='M')x1++;
            else if(p[j]=='A')x2++;
            else if(p[j]=='R')x3++;
            else if(p[j]=='I')x4++;
            else if(p[j]=='T')x5++;
            else if(p[j]=='G')x6++;
        }

       q=0;
        for(j=1;j<=6;j++){
            if(j==1)w[q]=x1;
            else if(j==2)w[q]=x2;
            else if(j==3)w[q]=x3;
            else if(j==4)w[q]=x4;
            else if(j==5)w[q]=x5;
            else if(j==6)w[q]=x6;
            q++;
        }

        small=w[0];
        for(j=1;j<=5;j++){
            if(w[j]<=small)small=w[j];
        }

       if(w[2]>=(small*2) && w[1]>=(small*3))printf("%d\n",small);
        else printf("0\n");
    }
    return 0;
}
