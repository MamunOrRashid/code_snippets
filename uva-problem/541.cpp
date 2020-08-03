#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i,j,arr[105][105],n,row,column;
    while(scanf("%d",&n)==1 && n!=0){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int sum_1=0,count_1=0,yes_1,row=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                sum_1=sum_1+arr[i][j];
            }
            if(sum_1%2==0){sum_1=0;continue;}
            else{
                row=1;
                count_1++;
                yes_1=i;
            }
             sum_1=0;
        }
       // printf("%d\n",count_1);
        int sum_2=0,count_2=0,yes_2,column=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                sum_2=sum_2+arr[j][i];
            }
            if(sum_2%2==0){sum_2=0;continue;}
            else{
                column=1;
                count_2++;
                yes_2=i;
            }
            sum_2=0;
        }
        //printf("%d\n",count_2);
        if(row==0 && column==0)printf("OK\n");
        else if(count_1==1 && count_2==1)printf("Change bit (%d,%d)\n",yes_1+1,yes_2+1);
        else if(count_1>1 || count_2>1)printf("Corrupt\n");


    }

    return 0;
}
