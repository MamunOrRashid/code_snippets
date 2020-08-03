#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    while(scanf("%lld",&N) == 1)
    {
        int nDigits=0, NewMod=0;
            do
            {
                NewMod = (10*NewMod + 1)%N;
                nDigits++;
            }while(NewMod);

        cout << nDigits << endl;
    }


    return 0;
}

