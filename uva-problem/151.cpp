#include <bits/stdc++.h>
using namespace std;

/**int N;
int simulation (int m)
{
    list <int> l;
    int i;
    for (i = 1; i <= N; i++)
        l.push_back (i);
    while ( l.size () > 1 )
    {
        l.pop_front ();
        for (i = 1; i < m; i++)
        {
            l.push_back ( l.front () );
            l.pop_front ();
        }
    }
    return l.front ();
}

int main ()
{
    while (scanf ("%d", &N))
    {
        if (N == 0)
            return 0;
        int m = 1;
        int region = 0;
        while (1)
        {
            region = simulation (m);
            if (region == 13)
                break;
            m++;
        }
        printf("\n\n\n\n\n%d\n", m);
    }
    return 0;
}*/


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    list<int>l(10);
    for(int i=0;i<9;i++) l.push_back(i);

    for(int i=0;i<9;i++) printf("%d ",l.front());



    return 0;
}
















