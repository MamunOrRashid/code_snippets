#include <iostream>
#include <cstdio>
using namespace std;
/*int factorial(int number){
    int temp;
    if(number<=1)return 1;
    temp=number*factorial(number-1);
    return temp;
}*/
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
            if(n==0)  printf("Underflow!\n");
        else if(n<0){
            if(n%2==0)printf("Underflow!\n");
            else printf("Overflow!\n");
        }
        else if(n<=7) printf("Underflow!\n");
        else if(n>=14) printf("Overflow!\n");
        ///you can try this place n! value
       /* else if(n==8||n==9||n==10||n==11||n==12||n==13){
            printf("%d\n",factorial(n));
        }*/
    }

    return 0;
}
