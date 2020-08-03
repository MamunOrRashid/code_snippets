#include <stdio.h>

int main()
{
    int H1,M1,H2,M2,SUM1,SUM2;
    while(scanf("%d%d%d%d",&H1,&M1,&H2,&M2)!=EOF){
        if(H1==0 && M1==0 && H2==0 && M2==0)break;
        if(H2>=H1 && M2>=M1){
            SUM1=H2-H1;
            SUM2=M2-M1;
            printf("%d\n",(60*SUM1)+SUM2);
        }
        else if(H2>H1 && M2<M1){
            SUM1=H2-(H1+1);
            SUM2=60-M1+M2;
            printf("%d\n",(60*SUM1)+SUM2);
        }
        else if(H2<H1 && (M2<=M1 || M1<M2)){
            SUM1=23-H1+H2;
            SUM2=60-M1+M2;
            printf("%d\n",(60*SUM1)+SUM2);
        }
    }
    return 0;
}
