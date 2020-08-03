/**#include <bits/stdc++.h>
using namespace std;

bool myfn(pair<int,int> a,pair<int,int> b)
{
    if(a.first<b.first) cout<<a.first<<" "<<b.first<<endl;
    if(a.first==b.first)
    {
        if(a.second>b.second)  return true;
    }
    return false;
}
int main()
{
    string s="";
    int j=0,NO=1;
    while(getline(cin,s))
    {
        vector<pair<int,int> > inp;
        vector<pair<int,int> >::iterator it;
        bool check[256];
        int cnt[256]={0};

        for(int i=0;i<s.length();i++) cnt[s[i]]++;
        for(int i=32;i<=127;i++)
        {
            if(cnt[i])
            inp.push_back(make_pair(cnt[i],i));
        }
        sort(inp.begin(),inp.end(),myfn);
        /**if(NO++>1)
        cout<<endl;
        for(it=inp.begin();it!=inp.end();it++)
        cout<<(*it).second<<" "<<(*it).first<<endl;*/
    }
    return 0;
}*/











#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1015];
    bool yes=true;
    while(gets(ch))
    {
        int len,i,j,count[1015]={0},large_value=0;
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            count[ch[i]]++;
            if(large_value<count[ch[i]]) large_value=count[ch[i]];
        }
        if(yes)yes=false;
        else cout<<endl;
        for(i=1;i<=large_value;i++){
          for(j=127;j>=32;j--)
          {
              if(count[j]==i) printf("%d %d\n",j,count[j]);
          }
        }
    }
    return 0;
}

