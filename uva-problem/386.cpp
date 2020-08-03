#include <bits/stdc++.h>
#define end 200
using namespace std;
long long int first,all,a,b,c;
void show()
{
    for(int k=6;k<=end;k++)
     {
      first=k*k*k;
       for(int i=2;i<=end;i++)
        {
             a=i*i*i;
            for(int j=i+1;j<=end;j++)
            {
                b=j*j*j;
                for(int t=j+1;t<=end;t++)
                {
                    c=t*t*t;;
                   all=a+b+c;
                   if(all==first)printf("Cube = %d, Triple = (%d,%d,%d)\n",k,i,j,t);
                }
            }
        }
   }
}
int main()
{
    show();

    return 0;
}

/****
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int qa,qb,qc,qd,qsum;

    for(int i=6; i<=200; i++)
    {
        qa= i*i*i;
        for(int j=2; j<=200; j++)
        {
            qb= j*j*j;
            for(int k=j+1; k<=200; k++)
            {
                qc= k*k*k;
                for(int l=k+1; l<=200; l++)
                {
                    qd= l*l*l;
                    qsum=qb+qc+qd;
                    if(qa == qsum)
                        cout<<"Cube = "<<i<<", Triple = ("<<j<<","<<k<<","<<l<<")"<<endl;
                }
            }
        }
    }

    return 0;
}*/
