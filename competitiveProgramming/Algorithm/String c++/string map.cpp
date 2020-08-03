#include <bits/stdc++.h>
using namespace std;

int main()
{
    /** map<string,string>m;
     int i;
     m.insert(pair<string, string>("yes","no"));
     m.insert(pair<string, string>("up","down"));
     m.insert(pair<string, string>("left","right"));
     m.insert(pair<string, string>("good","bad"));

     string s;
     cout<<"Enter word:";
     cin>>s;

     map<string, string>::iterator p;
         p=m.find(s);
         if(p!=m.end()) cout<<"Opposite: "<<p->second<<endl;
         else cout<<"Word not is map"<<endl;*/




    char line[1000];
    while( gets( line ) )
    {
        stringstream ss( line ); // initialize kortesi
        int num;
        vector< int > v;
        while( ss >> num ) v.push_back( num ); // :P
        sort( v.begin(), v.end() );
        puts(line);
    }
    puts(line);
    //cout<<endl<<line;


    return 0;
}
