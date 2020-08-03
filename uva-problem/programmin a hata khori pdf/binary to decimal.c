#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,i,j,t,sum,len,ch[1000];
   // char ch[600];
    //scanf("%s",ch);
    //len=strlen(ch);
    scanf("%d",&n);
    t=0;
    while(n!=0){
        ch[t]=n%10;
        n=n/10;
        t++;
    }
    j=0;
    sum=0;
    for(i=0;i<t;i++){
        if(ch[i]==0)
            sum=sum+(pow(2,j))*0;
        else if(ch[i]==1)
            sum=sum+(pow(2,j))*1;
       // printf("%d",sum);
         j++;
    }
    printf("The decimal value is %d\n",sum);
    return 0;
}
