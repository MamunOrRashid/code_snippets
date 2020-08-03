/**#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int T,i;
    char ch[20];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",ch);
        if((ch[0]=='o'&&ch[1]=='n')||(ch[1]=='n'&&ch[2]=='e')||(ch[0]=='o'&&ch[2]=='e')) printf("1\n");
        else if((ch[0]=='t'&&ch[1]=='w')||(ch[1]=='w'&&ch[2]=='o')||(ch[0]=='t'&&ch[2]=='o')) printf("2\n");
        else if((ch[0]=='s'&&ch[1]=='i')||(ch[1]=='i'&&ch[2]=='x')||(ch[0]=='s'&&ch[2]=='x')) printf("6\n");
        else if((ch[0]=='t'&&ch[1]=='e')||(ch[1]=='e'&&ch[2]=='n')||(ch[0]=='t'&&ch[2]=='n')) printf("10\n");
        else if((ch[0]=='f'&&ch[1]=='o'&&ch[2]=='u')||(ch[1]=='o'&&ch[2]=='u'&&ch[3]=='r')||(ch[0]=='f'&&ch[1]=='o'&&ch[3]=='r')||(ch[0]=='f'&&ch[2]=='u'&&ch[3]=='r'))printf("4\n");
        else if((ch[0]=='f'&&ch[1]=='i'&&ch[2]=='v')||(ch[1]=='i'&&ch[2]=='v'&&ch[3]=='e')||(ch[0]=='f'&&ch[1]=='i'&&ch[3]=='e')||(ch[0]=='f'&&ch[2]=='v'&&ch[3]=='e'))printf("5\n");
        else if((ch[0]=='n'&&ch[1]=='i'&&ch[2]=='n')||(ch[1]=='i'&&ch[2]=='n'&&ch[3]=='e')||(ch[0]=='n'&&ch[1]=='i'&&ch[3]=='e')||(ch[0]=='f'&&ch[2]=='n'&&ch[3]=='e'))printf("9\n");
        else if((ch[0]=='s'&&ch[1]=='e'&&ch[2]=='v'&&ch[3]=='e')||(ch[1]=='e'&&ch[2]=='v'&&ch[3]=='e'&&ch[4]=='n')||(ch[0]=='s'&&ch[1]=='e'&&ch[3]=='e'&&ch[4]=='n')||(ch[0]=='s'&&ch[2]=='v'&&ch[3]=='e'&&ch[4]=='n')||(ch[0]=='s'&&ch[1]=='e'&&ch[2]=='v'&&ch[4]=='n'))printf("7\n");
        else if((ch[0]=='e'&&ch[1]=='i'&&ch[2]=='g'&&ch[3]=='h')||(ch[1]=='i'&&ch[2]=='g'&&ch[3]=='h'&&ch[4]=='t')||(ch[0]=='e'&&ch[1]=='i'&&ch[3]=='h'&&ch[4]=='t')||(ch[0]=='e'&&ch[2]=='g'&&ch[3]=='h'&&ch[4]=='t')||(ch[0]=='e'&&ch[1]=='i'&&ch[2]=='g'&&ch[4]=='t'))printf("8\n");
        else if((ch[0]=='t'&&ch[1]=='h'&&ch[2]=='r'&&ch[3]=='e')||(ch[1]=='h'&&ch[2]=='r'&&ch[3]=='e'&&ch[4]=='e')||(ch[0]=='t'&&ch[1]=='h'&&ch[3]=='e'&&ch[4]=='e')||(ch[0]=='t'&&ch[2]=='r'&&ch[3]=='e'&&ch[4]=='e')||(ch[0]=='t'&&ch[1]=='h'&&ch[2]=='r'&&ch[4]=='e'))printf("3\n");
    }


    return 0;
}*/

#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int tc;
    char s[20];
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%s", s);
        if (strlen(s) > 3)
            printf("3\n");
        else
        {
            if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
            else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
            else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
            else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
            else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
            else if(s[0] == 't' && s[1] == 'w') printf("2\n");
            else if(s[0] == 't' && s[2] == 'o') printf("2\n");
            else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
        }
    }

    return 0;
}
