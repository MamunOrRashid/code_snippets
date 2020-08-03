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

#define MX 50007
#define pi 2*acos(0.00)

#define open       freopen("input.txt","r",stdin)
#define close      freopen ("output.txt","w",stdout)


ll vis[500009],hobe[500009];
int main()
{
    ll i, j, l, u, v, w, x, y, z, a, b, c, d, e, f, t = 1, tc;
    ll flg, sz, cnt, gt, ans, mx, mn;
    ll m, k, n;
    ll low, hi, md, inp[MX][2], sm, ff,sq;

    sc(tc);
    while(tc--)
    {
        sc(n);
//        map<pair<int,int> ,int> mp;
//        pair<int,int> pr;
        flg=0;
        mem(vis);
        mem(hobe);
        for(i=0; i<n; i++)
        {
            sc2(a,b);
            if(a>b) swap(a,b);
            inp[i][0]=a,inp[i][1]=b;
            hobe[a]++;
            hobe[b]++;

        }

        for(i=0; i<n; i++)
        {
            a = inp[i][0],b=inp[i][1];
//            cout<<hobe[a]<<" "<<hobe[b]<<endl;
            if(hobe[a]<=hobe[b] && vis[a]==0) vis[a]=1,hobe[b]--,hobe[a]=inf;
            else if(hobe[a]>=hobe[b] && vis[b]==0) vis[b]=1,hobe[a]--,hobe[b]=inf;
            else flg=1;
//            cout<<i<<endl;
            if(flg) break;

        }
        if(flg) printf("impossible\n");
        else printf("possible\n");
    }



    return 0;
}

