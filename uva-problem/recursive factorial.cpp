#include <iostream>
#include <cstdio>
using namespace std;

int factorial(int);

int main() {
	int number;

	printf("Please enter a positive integer: \n");
	scanf("%d",&number);

	  printf("the value is: %d\n",factorial(number));
	  main();
	  return 0;
}
int  factorial(int number) {
	int temp;

	//if(number <= 1) return 1;

	temp = number * factorial(number - 1);

	return temp;
}
