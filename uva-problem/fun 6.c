#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, getSumOfDigit(num));
    getch();
    return 0;
}

/*
 * Function to calculate sum of digits of a number
 */
int getSumOfDigit(int num){
    /* Recursion termination condition*/
    if(num == 0)
        return 0;

    return num%10 + getSumOfDigit(num/10);
}
