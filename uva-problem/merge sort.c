#include <stdio.h>

int A[9]= {-9999,66,33,40,22,55,88,60,11};
int B[9];
int N=8;

void MERGESORT(void);
int main()
{
    int i;
    printf("Array A: \n");
    for(i=1; i<=N; i++) printf("%d\t",A[i]);
    MERGESORT();

    printf("\n\nmerge sorted array A: \n");
    for(i=1; i<=N; i++) printf("%d\t",A[i]);
    getch();
    return 0;
}
void MERGESORT(void)
{
    int i,L=1;
    while(L<N)
    {
        MERGEPASS(&A[0],L,&B[0]);
        MERGEPASS(&B[0],2*L,&A[0]);
        L=4*L;
    }
}
