#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    while(scanf("%c",&ch)!=EOF){

        if(ch=='\n')printf("\n");
        else if(ch=='0')printf("0");
        else if(ch=='1')printf("1");
        else if(ch=='-')printf("-");
        else if(ch=='A' || ch=='B' || ch=='C')printf("2");
        else if(ch=='D' || ch=='E' || ch=='F')printf("3");
        else if(ch=='G' || ch=='H' || ch=='I')printf("4");
        else if(ch=='J' || ch=='K' || ch=='L')printf("5");
        else if(ch=='M' || ch=='N' || ch=='O')printf("6");
        else if(ch=='P' || ch=='Q' || ch=='R' || ch=='S')printf("7");
        else if(ch=='T' || ch=='U' || ch=='V')printf("8");
        else if(ch=='W' || ch=='X' || ch=='Y' || ch=='Z')printf("9");
    }
    return 0;
}
