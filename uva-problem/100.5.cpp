#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i,j,store_i,store_j;
    while(cin>>i>>j){
        store_i=i;
        store_j=j;
        int max_length=0;
        int length=1;
        if(i>j) swap(i,j);
        while(i<=j){
            int n=i;
            length=1;
            while(n!=1){
                if(n%2!=0) n=3*n+1;
                else n=n/2;
                length++;
            }
            if(length>max_length)swap(length,max_length);
            i++;
        }
        cout<<store_i<<" "<<store_j<<" "<<max_length<<endl;
    }

    return 0;
}
