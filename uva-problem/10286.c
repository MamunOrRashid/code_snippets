#include <stdio.h>

int main()
{
    double F,sum;
    while(scanf("%lf",&F)!=EOF){
        if(F==0.0000001){
            sum=(1.067 * F);
            printf("%.10lf\n",sum);
        }
        else if(F>0.0000001){
            sum=(1.067 * F)+0.0000000001;
            printf("%.10lf\n",sum);
        }
    }
    return 0;

}
