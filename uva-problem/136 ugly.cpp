#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,count=1;
    for(int i=2; ;i++){
        if((i%2)==0 || (i%3)==0 || (i%5)==0){
            count++;
            if(count==1500){
                printf("The 1500'th ugly number is <%d>.",i);
                break;
            }
        }
    }
    return 0;
}

