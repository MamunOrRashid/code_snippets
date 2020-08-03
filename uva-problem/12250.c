#include <stdio.h>
#include <string.h>

int main()
{
    char s[14];

    int i,a,b,c,d,e,f;
    for(i=1; i<=2000; i++)
    {
        scanf("%s",s);
        a=strcmp(s,"HELLO");
        b=strcmp(s,"HOLA");
        c=strcmp(s,"HALLO");
        d=strcmp(s,"BONJOUR");
        e=strcmp(s,"CIAO");
        f=strcmp(s,"ZDRAVSTVUJTE");
        if(s[0]=='#' && s[1]=='\0') return 0;
        else if(a==0)printf("Case %d: ENGLISH\n",i);
        else if(b==0)printf("Case %d: SPANISH\n",i);
        else if(c==0)printf("Case %d: GERMAN\n",i);
        else if(d==0)printf("Case %d: FRENCH\n",i);
        else if(e==0)printf("Case %d: ITALIAN\n",i);
        else if(f==0)printf("Case %d: RUSSIAN\n",i);
        else{
            printf("Case %d: UNKNOWN\n",i);
        }

    }
    return 0;
}
