#include <stdio.h>
#include <math.h>

int decToBin(int decimal)
{
    int i, binary = 0;

    for(i = 0; decimal != 0; i++) {
        binary = binary + pow(10,i) *(decimal%2);
        decimal = decimal/2;
    }

    return binary;
}

int main(int argc, char** argv) {

    int n;
    printf("Enter your decimal value:");
    scanf("%d",&n);
    printf("The bin of %d is %d", n, decToBin(n));

    return 0;
}