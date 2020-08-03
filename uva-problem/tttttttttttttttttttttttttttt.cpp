#include <bits/stdc++.h>
using namespace std;

int main()
{
   /// vector<int>v(10); ///create zero-length vector
    vector<int>v;
    int i;

    cout<<"size = "<<v.size()<<endl;
    for(int i=0;i<10;i++) v.push_back(i);

    cout<<"size now = "<<v.size()<<endl;

    cout<<"current contents: "<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
     for(int i=0;i<10;i++) v.push_back(i+10);
     cout<<"size now = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++) v[i]=v[i]+v[i];

    cout<<"Content doubled: \n";
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}
