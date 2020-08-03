#include <iostream>
#include <cstdio>
using namespace std;



int main() {
    double x = 3.00;
    double y = .15;
    while(x>0) {
    	printf("%.15lf ",x);
        printf("%lf\n",x);
        x-=y;
    }
    return 0;
}
