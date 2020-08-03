#include <stdio.h>
#include <string.h>

int main()
{

    char s[500],ans[500]="";
    int l,i,j,k;
    scanf("%s",s);
    l=strlen(s);//length of the string
    j=0;
    for(i=0; i<l; i++)
    {
        if(l>(i+2)&&s[i]=='B'&&s[i+1]=='O'&&s[i+2]=='J')//if string has at least three characters
        {
            ans[j]='X';
            j++;
            i=i+2;
        }
        else
        {
            ans[j]=s[i];
            j++;
        }
    }
    printf("%s",ans);
    return 0;
}
