#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int N,len,i,k,n,o,h,c;
    char ch[85];
    double sum;
    scanf("%d",&N);
    while(N--)
    {

        scanf(" %[^\n]",ch);
        n=o=h=c=0;
        for(i=0; ch[i]!='\0'; i++)
        {
            if((ch[i]=='N' || ch[i]=='O' || ch[i]=='H' || ch[i]=='C') && (ch[i+1]=='N' || ch[i+1]=='O' || ch[i+1]=='H' || ch[i+1]=='C') || ch[i+1]=='\0')
            {
                if(ch[i]=='N') n++;
                else if(ch[i]=='O')o++;
                else if(ch[i]=='H')h++;
                else if(ch[i]=='C')c++;
            }

            else if((ch[i]=='N' || ch[i]=='O' || ch[i]=='H' || ch[i]=='C') && ((ch[i+1]-'0')>=1 && (ch[i+1]-'0')<=9) && ((ch[i+2]-'0')>=1 && (ch[i+2]-'0')<=9))
            {
                int no;
                no=10*(ch[i+1]-'0') + (ch[i+2]-'0');
                if(ch[i]=='N') n=n+no;
                else if(ch[i]=='O') o=o+no;
                else if(ch[i]=='H') h=h+no;
                else if(ch[i]=='C') c=c+no;
            }
            else if((ch[i]=='N' || ch[i]=='O' || ch[i]=='H' || ch[i]=='C') && ((ch[i+1]-'0')>=2 && (ch[i+1]-'0')<=9))
            {
                int no;
                no=ch[i+1]-'0';
                if(ch[i]=='N') n=n+no;
                else if(ch[i]=='O') o=o+no;
                else if(ch[i]=='H') h=h+no;
                else if(ch[i]=='C') c=c+no;
                //printf("ch[i] = %c\t%lf\n",ch[i],sum);
            }

           // printf("c=%d h=%d o=%d n=%d\n",c,h,o,n);
        }
        printf("%.3lf\n",(n*14.01)+(o*16.00)+(h*1.008)+(c*12.01));
    }

    return 0;
}
