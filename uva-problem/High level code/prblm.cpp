#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<deque>
#include<climits>
#include<complex>

using namespace std;
//-------------------------------------

#define ll long long
#define ull unsigned long long
#define sc(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%lld%lld",&x,&y)
#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d%d",&x,&y)

#define mem(x) memset(x,0,sizeof x)
#define all(x) x.begin(),x.end()
#define pb(x)  push_back(x);
#define xx first
#define yy second
#define inf 999999999999999
#define mkp(x,y) make_pair(x,y)
#define pii pair<ll,ll>

//---------------------------------------

#define MX 200007
#define pi 2*acos(0.00)

#define open       freopen("input.txt","r",stdin)
#define close      freopen ("output.txt","w",stdout)


int main()
{
    ll i, j, l, u, v, w, x, y, z, a, b, c, d, e, f, t = 1, tc;
    ll flg, sz, cnt, gt, ans, mx, mn;
    ll m, k, n;
    ll low, hi, md, inp[MX], sm, ff,sq;

    sc2(n,m);
    for(i=0; i<n; i++) sc(inp[i]);
    ans =inp[m],sm=inp[m];
    inp[m]=-1;
    cnt=1;
    int id;
    flg=0;
    if(sm>300) flg=1;
    for(i=0; i<n; i++)
    {
        mn = inf;
        for(j=0; j<n; j++)
        {
            if(inp[j]!=-1) mn=min(mn,inp[j]);
            if(mn==inp[j]) id = j;
        }
//        cout<<mn<<endl;
        if((sm+mn)<=300) ans+=(sm+mn),sm+=mn,cnt++,inp[id]=-1;

    }
    if(flg) cnt=0,ans=0;

    cout<<cnt<<" "<<ans<<endl;



    return 0;
}

