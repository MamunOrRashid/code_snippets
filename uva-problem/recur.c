 #include<stdio.h>

void printFibonacci(int);

int main(){

    int k,n;
    long int i=0,j=1,f;

    printf("Enter the range of the Fibonacci series: ");
    scanf("%d %d ",&n);

    printf("Fibonacci Series: ");
    printf("%d ",0);
    printFibonacci(n);

    return 0;
}

void printFibonacci(int n){

    long int first=0,second=1,sum;

    while(n>0){
         sum = first + second;
         first = second;
         second = sum;
         printf("%ld ",sum);
         n--;
    }
}

