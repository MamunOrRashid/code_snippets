#include <stdio.h>

int main()
{
    printf("\n  0 | 0    is %d,",3 || 4);
    printf("\n  0 | 1    is %d,",3 | 4);
    printf("\n  1 | 1    is %d,",1 | 1);
    printf("\n  1 | 2    is %d,",1 | 2);
    printf("\n  128 | 127    is %d,",128 | 127);
}
