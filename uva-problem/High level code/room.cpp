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
    sc(n);
    pair<int,int> pr[207];
    for(i=0; i<n; i++) sc2(a,b),pr[i]=mkp(a,b);
    sort(pr,pr+n);

    ans = 0;
    for(i=0; i<n; i++)
    {
        ans++;
        a = pr[i].xx,b=pr[i].yy;
        mx = -1;
        for(j=a; j<=b; j++)
        {
            cnt= 0 ;
            for(k=i+1; k<n; k++)
            {
                if(j>=pr[k].xx && j<=pr[k].yy) cnt++;
                else break;
            }
            mx = max(mx,cnt);
        }
        i = i+mx;
    }
    cout<<ans<<endl;


    return 0;
}

