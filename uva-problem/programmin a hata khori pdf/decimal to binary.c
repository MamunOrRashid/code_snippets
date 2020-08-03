#include <stdio.h>

int main()
{
    int N,j,i,p[4000];
    scanf("%d",&N);
    i=0;
    while(N!=0)
    {
        p[i]=N%2;
        N=N/2;

        i++;
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%d",p[j]);
    }
    printf("\n");
    main();

    return 0;
}
