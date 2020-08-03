/*
 2  Problem link
 3  Type: Complete Search
 4  Algorithm:
 5      Obviously, from equation 2, if x = y = z = 100,
 6      then 100^3 = 10^6 > 10^5. Therefore, all three
 7      numbers must be less than 100, this is enough for
 8      the problem to get AC :).
 9  */
 ////////////////////////////////// solution 1 is not good it take much time
 /**#include <iostream>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <cstdlib>

  using namespace std;
  bool solve(int a, int b, int c);

  int main()
  {
      int nTest,
          a,b,c;
      cin >> nTest;
      while (nTest--) {
          cin >> a >> b >> c;
          if (!solve(a,b,c)) cout << "No solution." << endl;
      }
      return 0;
  }

  bool solve(int a, int b, int c) {
      for (int i = -100; i <= 100; i++)
              for (int j = -100; j <= 100; j++)
                  for (int k = -100; k <= 100; k++)
                      if (i!=j && j!=k && i!=k &&
                          i+j+k == a && i*j*k == b && i*i+j*j+k*k == c) {
                          cout << i << " " << j << " " << k << endl;
                         return true;
                      }
      return false;
  }
*/


#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int formula(int a,int b,int c){
    int i,j,k;

    for(i=-58;i<=58;i++){
        for(j=-22;j<=22;j++){
            if(i!=j && (i*i + j*j + (a-i-j)*(a-i-j))==c){
                int temp=(i*j);
                if(temp==0) continue;
                int k=b/temp;
                if(k!=i && k!=j && (i+j+k==a) && (i*j*k)==b && (i*i + j*j + k*k == c)){
                   int arr[3] = {i,j,k};
                   sort(arr,arr+3);
                   printf("%d %d %d\n",arr[0],arr[1],arr[2]);
                   return 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    int a,b,c,tc;
    int value;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d%d",&a,&b,&c);
        value=formula(a,b,c);
         if(!value)printf("No solution.\n");
    }

    return 0;
}

















