/**#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name,temp;
    int maxi=0;
    while(cin>>name){
        if(name=="E-N-D") break;
        int len=name.size(),cnt=0;
        for(int i=0;i<len;i++){
            if(isalpha(name[i]) || name[i]=='-')cnt++;
        }
        if(cnt>maxi){
            temp=name;
            maxi=cnt;
        }
    }

    int len=temp.size();
    for(int i=0;i<len;i++){
        if(isalpha(temp[i]) || temp[i]=='-'){
            if(temp[i]>='A' && temp[i]<='Z')printf("%c",tolower(temp[i]));
            else printf("%c",temp[i]);
        }

    }
    cout<<endl;
   // cout<<strlwr(temp)<<endl;

    return 0;
}*/





#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name,temp;
    int maxi=0;
    while(cin>>name){
        if(name=="E-N-D") break;
        int len=name.size(),cnt=0;
        for(int i=0;i<len;i++){
            if(isalpha(name[i]) || name[i]=='-')cnt++;
        }
        if(cnt>maxi){
            temp=name;
            maxi=cnt;
        }
    }

    int len=temp.size();
    for(int i=0;i<len;i++){
        if(isalpha(temp[i]) || temp[i]=='-'){
            if(temp[i]>='A' && temp[i]<='Z')temp[i]=temp[i]-'A'+'a';

        }

    }
    cout<<temp<<endl;
   // cout<<strlwr(temp)<<endl;



    return 0;

}

