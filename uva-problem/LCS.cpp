#include <bits/stdc++.h>
using namespace std;
char t[110],w[110];
int a_1[110][110],b_2[110][110];

int com(int a,int b){
    if(a>b)return a;
    else return b;
}
int lcs(char *a,char *b,int n1, int n2)
{
    int i,j,k;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                a_1[i+1][j+1]=a_1[i][j]+1;
                k= a_1[i+1][j+1];

            }
            else{ a_1[i+1][j+1]=com(a_1[i+1][j],a_1[i][j+1]);k= a_1[i+1][j+1];}
        }
    }
    return k;
}
int main()
{
    int n1,n2,r=0;
    while(gets(t)){
        r++;
        if(t[0]=='#')break;
        int n1,n2;
        gets(w);
        n1=strlen(t);
        n2=strlen(w);
        printf("Case #%d: you can visit at most %d cities.\n",r,lcs(t,w,n1,n2));
    }

    return 0;
}
