#include <stdio.h>

int main()
{
    int number,mas[13],need[13],i,k=0,yes;
    while(scanf("%d",&number) && number>=0){

        yes=number;
        for(i=0;i<12;i++){
            scanf("%d",&mas[i]);
        }
         for(i=0;i<12;i++){
            scanf("%d",&need[i]);
        }
        k++;
        printf("Case %d:\n",k);
        for(i=0;i<12;i++){
            if(yes>=need[i]){
                yes-=need[i];
                printf("No problem! :D\n");
            }
            else printf("No problem. :(\n");
            yes+=mas[i];
        }
    }
    return 0;
}
