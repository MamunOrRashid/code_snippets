#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int first[6],second[6],i,j,check;
    while((scanf("%d%d%d%d%d%d%d%d%d%d",&first[0],&first[1],&first[2],&first[3],&first[4],&second[0],&second[1],&second[2],&second[3],&second[4])!=EOF))
    {
        check=0;
        for(i=0,j=0; i<5; i++,j++)
        {
            if(first[i]==second[j])
            {
                check=1;
                break;
            }
        }
        if(check==0)printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
