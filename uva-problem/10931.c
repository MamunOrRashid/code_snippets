#include <stdio.h>

int main()
{
    unsigned long int I,count,p[100000];
    int j,i;
    while(scanf("%lu",&I)==1){
        if(I==0)break;
        i=0;
        count=0;
        while(I!=0){
            p[i]=I%2;
            if(p[i]==1)count++;
            I=I/2;
            i++;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--){
            printf("%lu",p[j]);
        }
        printf(" is %lu (mod 2).\n",count);

    }
    return 0;
}
