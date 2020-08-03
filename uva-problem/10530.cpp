#include <bits/stdc++.h>
using namespace std;

int main()
{

   int guess;
   char ch[15];
   while(scanf("%d",&guess)==1 && guess){
        int low=1;
        int high =10;
       // getchar();
        while(scanf(" %[^\n]s",ch) && strcmp(ch,"right on")!=0){
            if(strcmp(ch,"too high")==0){
                if(guess<=high)high=guess-1;
            }
            else if(strcmp(ch,"too low")==0){
                if(guess>=low)low=guess+1;
            }
            scanf("%d",&guess);
        }
        if(guess>high || guess<low || low>high) printf("Stan is dishonest\n");
        else printf("Stan may be honest\n");
   }

    return 0;
}


/*using namespace std;


int main ()
{
    int guess;
    char ans1 [10];
    char ans2 [10];

    while ( scanf ("%d", &guess) && guess ) {

        int high = 11;
        int low = 0;

        while ( scanf ("%s %s", ans1, ans2) && strcmp (ans1, "right") != 0 ) {
            if ( strcmp (ans2, "high") == 0 ) {
                if ( guess <= high )
                    high = guess - 1;
            }

            else if ( strcmp (ans2, "low") == 0 ) {
                if ( guess >= low )
                    low = guess + 1;
            }
            scanf ("%d", &guess);
        }

        if ( guess < low || guess > high || low > high )
            printf ("Stan is dishonest\n");
        else
            printf ("Stan may be honest\n");

    }

    return 0;
}
*/






















