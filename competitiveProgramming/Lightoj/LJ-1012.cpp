#include <iostream>
using namespace std;
char pt[24][24];
int count,col,row;
int xx[]= {0, -1, 0, 1};
int yy[]= {1, 0, -1, 0};
void dfs(int x, int y);

int main()
{
    int tc;

    cin>>tc;
    for( int i = 1; i <= tc; i++ )
    {
        cin>>col>>row;
        for(int m=0; m<row; m++)cin>>pt[m];
        count=1;
        for(int j=0; j <row; j++)
        {
            for(int k=0; k<col; k++)
            {
                if(pt[j][k]=='@')
                {
                    dfs(j,k);
                }
            }
        }

        cout<<"Case "<<i<<": "<<count<<endl;
    }

    return 0;
}

void dfs(int x, int y)
{
    pt[x][y]='#';
    for(int i=0; i<4; i++)
    {
        int xn=xx[i]+x;
        int yn=yy[i]+y;

        if( xn>=0 && yn>=0 && xn<row && yn<col && pt[xn][yn]=='.')
        {
            count++;
            dfs(xn, yn);
        }
    }
}
