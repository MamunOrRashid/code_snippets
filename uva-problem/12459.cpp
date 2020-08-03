//#include <algorithm>
#include <iostream>
//#include <cstdlib>
//#include <cstring>
#include <cstdio>
//#include <cmath>
using namespace std;

long long F[100];
int main(){
       F[1] = 1;
       F[2] = 2;
       for(int i = 3; i < 100; ++ i)
       F[i] = F[i-1] + F[i-2];
       int n;
       while (cin >> n && n)
        cout << F[n] << endl;

       return 0;
}
