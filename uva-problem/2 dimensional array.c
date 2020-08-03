#include <stdio.h>

int main()
{
    int a[3][4]=   /* 3 is raw and 4 is called column*/
    {
        {1,2,3,4},
        {2,3,4,5},
        {5,6,7,8}
    };
    printf("%d\n",a[2][3]);
    return 0;
}
