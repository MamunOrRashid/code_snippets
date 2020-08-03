#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[30],t[30],w;
    int m,n,i,j,k,check,len;
    scanf("%d%d",&m,&n);

    for(i=0; i<m; i++) cin>>s[i]>>t[i];

    for(j=0; j<n; j++)
    {
        cin>>w;
        check=0;
        for(k=0; k<m; k++)
        {
            if(w==s[k])
            {
                cout<<t[k]<<endl;
                check=1;
                break;
            }
        }
        len=w.length();
        if(check==0)
        {
            if(w[len-1]=='y' && (w[len-2]=='a' || w[len-2]=='e' || w[len-2]=='i' || w[len-2]=='o' || w[len-2]=='u')) cout<<w<<"s"<<endl;

           else if(w[len-1]=='y' && (w[len-2]!='a' || w[len-2]!='e' || w[len-2]!='i' || w[len-2]!='o' || w[len-2]!='u'))
            {
               w[len-1]='i';
               cout<<w<<"es"<<endl;
            }

            else if(w[len-1]=='o' || w[len-1]=='s' || (w[len-1]=='h' && w[len-2]=='c') || (w[len-1]=='h' && w[len-2]=='s') || w[len-1]=='x')
                cout<<w+"es"<<endl;
            else cout<<w+"s"<<endl;
        }
    }
    return 0;
}
