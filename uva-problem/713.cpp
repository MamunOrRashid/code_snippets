#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char ch1[206],ch2[206],temp1[206],temp2[206],p[206], w[206],h[206];
    int n,i,t,r,k,len1,len2,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s",ch1,ch2);
        len1=strlen(ch1);
        len2=strlen(ch2);

        for(i=len1-1,k=0;i>=0;i--,k++){
                temp1[k]=ch1[i];
                //printf("temp1[%d] %c %d\n",k,temp1[k],(temp1[k]-'0'));
        }
        for(i=len2-1,k=0;i>=0;i--,k++){
                temp2[k]=ch2[i];
                //printf("temp2[%d] %c\n",k,temp2[k]);
        }

        r=0;
        int j;
        for(i=len1-1,j=len2-1,k=0;i>=0 || j>=0;i--,k++,j--){
            if(i<0)temp1[i]='0';
            if(j<0) temp2[j]='0';
            r=(temp1[i]-'0') + (temp2[j]-'0') + (r/10);
            //printf(" r = %d ",r);
            if(r<10)p[k]= r+'0';
            else if(r>9){
                p[k]=(r%10)+'0';
               // printf("p[%d] %c",k,p[k]);
                if(i==0){
                    k++;
                    p[k]=(r/10)+'0';
                }
            }
        }
        int v;
        for(i=k-1,t=0;i>=0;i--,t++){
            h[t]=p[i];
        }
        for(i=t-1;i>=0;i--){
            if(h[i]=='0'){
                continue;
            }
            else{
                for(v=i;v>=0;v--){
                    w[v]=h[v];
                     printf("%c",w[v]);
                }
                break;
            }
        }
        printf("\n");
       // printf("%s\n",w);
    }


    return 0;
}
