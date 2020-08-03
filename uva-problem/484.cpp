#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    map<long long,long long>m;
    vector<long long>v;

    while(scanf("%lld",&n)==1)
    {
        if(m[n]==0) v.push_back(n);
        m[n]++;
    }
    for(int i=0; i<v.size(); i++)
    {
        printf("%lld %lld\n",v[i],m[v[i]]);
    }

    return 0;
}
