 #include <stdio.h>
#include <math.h>
int main()
{
    char ch[100000];
    int sum,i,fract,j,flag;
    while(scanf("%s",ch)!=EOF){
        sum=0;
        flag=0;
        for(i=0;ch[i]!='\0';i++){
            if(ch[i]=='a')sum=sum+1;
            else if(ch[i]=='b')sum=sum+2;
            else if(ch[i]=='c')sum=sum+3;
            else if(ch[i]=='d')sum=sum+4;
            else if(ch[i]=='e')sum=sum+5;
            else if(ch[i]=='f')sum=sum+6;
            else if(ch[i]=='g')sum=sum+7;
            else if(ch[i]=='h')sum=sum+8;
            else if(ch[i]=='i')sum=sum+9;
            else if(ch[i]=='j')sum=sum+10;
            else if(ch[i]=='k')sum=sum+11;
            else if(ch[i]=='l')sum=sum+12;
            else if(ch[i]=='m')sum=sum+13;
            else if(ch[i]=='n')sum=sum+14;
            else if(ch[i]=='o')sum=sum+15;
            else if(ch[i]=='p')sum=sum+16;
            else if(ch[i]=='q')sum=sum+17;
            else if(ch[i]=='r')sum=sum+18;
            else if(ch[i]=='s')sum=sum+19;
            else if(ch[i]=='t')sum=sum+20;
            else if(ch[i]=='u')sum=sum+21;
            else if(ch[i]=='v')sum=sum+22;
            else if(ch[i]=='w')sum=sum+23;
            else if(ch[i]=='x')sum=sum+24;
            else if(ch[i]=='y')sum=sum+25;
            else if(ch[i]=='z')sum=sum+26;


            else if(ch[i]=='A')sum=sum+27;
            else if(ch[i]=='B')sum=sum+28;
            else if(ch[i]=='C')sum=sum+29;
            else if(ch[i]=='D')sum=sum+30;
            else if(ch[i]=='E')sum=sum+31;
            else if(ch[i]=='F')sum=sum+32;
            else if(ch[i]=='G')sum=sum+33;
            else if(ch[i]=='H')sum=sum+34;
            else if(ch[i]=='I')sum=sum+35;
            else if(ch[i]=='J')sum=sum+36;
            else if(ch[i]=='K')sum=sum+37;
            else if(ch[i]=='L')sum=sum+38;
            else if(ch[i]=='M')sum=sum+39;
            else if(ch[i]=='N')sum=sum+40;
            else if(ch[i]=='O')sum=sum+41;
            else if(ch[i]=='P')sum=sum+42;
            else if(ch[i]=='Q')sum=sum+43;
            else if(ch[i]=='R')sum=sum+44;
            else if(ch[i]=='S')sum=sum+45;
            else if(ch[i]=='T')sum=sum+46;
            else if(ch[i]=='U')sum=sum+47;
            else if(ch[i]=='V')sum=sum+48;
            else if(ch[i]=='W')sum=sum+49;
            else if(ch[i]=='X')sum=sum+50;
            else if(ch[i]=='Y')sum=sum+51;
            else if(ch[i]=='Z')sum=sum+52;
        }
        fract=sqrt(sum);
       for(j=2;j<=fract;j++){
        if(sum%j==0){
           flag=1;
        }
       }
       if(flag==0)printf("It is a prime word.\n");
       else printf("It is not a prime word.\n");
    }
    return 0;
}
