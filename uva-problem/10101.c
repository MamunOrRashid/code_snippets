#include <stdio.h>
#include <math.h>
int arr[100];
int main()
{
    long long int n,k=1,i,c;
    while(scanf("%lld",&n)==1){
        i=0;
       arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%10;
        n=n/10;
        i++;
        arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%10;
        n=n/10;
        i++;
        arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%100;
        n=n/100;
        i++;
        arr[i]=n%10;
        n=n/10;

        c=0;
        printf("%lld.",k);
        for(i=8;i>=0;i--){
            if(arr[i]!=0){
                c=1;
            }
            if(c==1){
                if(i==8 && arr[i]!=0)printf(" %d kuti",arr[i]);
                else if(i==7 && arr[i]!=0)printf(" %d lakh",arr[i]);
                else if(i==6 && arr[i]!=0)printf(" %d hajar",arr[i]);
                 else if(i==5 && arr[i]!=0)printf(" %d shata",arr[i]);
                else if(i==4 && arr[i]!=0)printf(" %d kuti",arr[i]);
                 else if(i==3 && arr[i]!=0)printf(" %d lakh",arr[i]);
                else if(i==2 && arr[i]!=0)printf(" %d hajar",arr[i]);
                 else if(i==1 && arr[i]!=0)printf(" %d shata",arr[i]);
                else if(i==0 && arr[i]!=0)printf(" %d",arr[i]);
            }
        }
        if(c==0)printf(" 0");
        printf("\n");
        k++;

    }

    return 0;
}
