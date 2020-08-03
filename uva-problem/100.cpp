/**#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(1){
        printf("%d\n",n);
        if(n==1) return 0;
        if(n%2!=0) n=3*n + 1;
        else n=n/2;
    }
    main();
    return 0;
}
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#define long long LL

using namespace std;

int main ()
{
    int i, j;

    while ( scanf ("%d %d", &i, &j) != EOF ) {

        int temp_i = i;
        int temp_j = j;

        if ( i > j ) swap (i, j);
        printf("%d %d\n",i,j);
        int max_cycle_length = 0;
        int cycle_length;

        while ( i <= j ) {
            unsigned int n = i;
            cycle_length = 1;

            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n /= 2;
                cycle_length++;
            }

            if ( cycle_length > max_cycle_length )
                max_cycle_length = cycle_length;

            i++;
        }

        printf ("%d %d %d\n", temp_i, temp_j, max_cycle_length);
    }

    return 0;
}

