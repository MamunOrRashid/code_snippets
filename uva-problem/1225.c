#include <stdio.h>

int main()
{
    unsigned int t,N,a[10000],p,p1,p2,p3,p4,p5,p6,p7,p8,p9,j,m,i;
    scanf("%u",&t);
    for(i=1;i<=t;i++){
        scanf("%u",&N);
        p=0;p1=0;p2=0;p3=0;p4=0;p5=0;p6=0;p7=0;p8=0;p9=0;
        for(j=1;j<=N;j++){
            a[j-1]=j;
        }
        for(j=0;j<N;j++){

            if(a[j]>=1 && a[j]<10000){

                while(a[j]!=0){
                    m=a[j]%10;
                    a[j]=a[j]/10;

                     if(m==0)p++;
                    else if(m==1)p1++;
                    else if(m==2)p2++;
                    else if(m==3)p3++;
                    else if(m==4)p4++;
                    else if(m==5)p5++;
                    else if(m==6)p6++;
                    else if(m==7)p7++;
                    else if(m==8)p8++;
                    else if(m==9)p9++;
                }
            }
        }
        printf("%u %u %u %u %u %u %u %u %u %u\n",p,p1,p2,p3,p4,p5,p6,p7,p8,p9);
    }
    return 0;
}
