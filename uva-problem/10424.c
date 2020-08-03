#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[25],ch2[25];
    int i,len1,len2,p,sum,sum2,count,count1,q,temp;
    double yes;
    while(1){
        gets(ch1);
        gets(ch2);
        len1=strlen(ch1);
        len2=strlen(ch2);
        sum=0;
        sum2=0;
        for(i=0;i<len1;i++){
           if(ch1[i]=='a'||ch1[i]=='A')p=1;
           else if(ch1[i]=='b'||ch1[i]=='B')p=2;
           else if(ch1[i]=='c'||ch1[i]=='C')p=3;
           else if(ch1[i]=='d'||ch1[i]=='D')p=4;
           else if(ch1[i]=='e'||ch1[i]=='E')p=5;
           else if(ch1[i]=='f'||ch1[i]=='F')p=6;
           else if(ch1[i]=='g'||ch1[i]=='G')p=7;
           else if(ch1[i]=='h'||ch1[i]=='H')p=8;
           else if(ch1[i]=='i'||ch1[i]=='I')p=9;
           else if(ch1[i]=='j'||ch1[i]=='J')p=10;
           else if(ch1[i]=='k'||ch1[i]=='K')p=11;
           else if(ch1[i]=='l'||ch1[i]=='L')p=12;
           else if(ch1[i]=='m'||ch1[i]=='M')p=13;
           else if(ch1[i]=='n'||ch1[i]=='N')p=14;
           else if(ch1[i]=='o'||ch1[i]=='O')p=15;
           else if(ch1[i]=='p'||ch1[i]=='P')p=16;
           else if(ch1[i]=='q'||ch1[i]=='Q')p=17;
           else if(ch1[i]=='r'||ch1[i]=='R')p=18;
           else if(ch1[i]=='s'||ch1[i]=='S')p=19;
           else if(ch1[i]=='t'||ch1[i]=='T')p=20;
           else if(ch1[i]=='u'||ch1[i]=='U')p=21;
           else if(ch1[i]=='v'||ch1[i]=='V')p=22;
           else if(ch1[i]=='w'||ch1[i]=='W')p=23;
           else if(ch1[i]=='x'||ch1[i]=='X')p=24;
           else if(ch1[i]=='y'||ch1[i]=='Y')p=25;
           else if(ch1[i]=='z'||ch1[i]=='Z')p=26;
           sum=sum+p;
        }
         for(i=0;i<len2;i++){
           if(ch2[i]=='a'||ch2[i]=='A')p=1;
           else if(ch2[i]=='b'||ch2[i]=='B')p=2;
           else if(ch2[i]=='c'||ch2[i]=='C')p=3;
           else if(ch2[i]=='d'||ch2[i]=='D')p=4;
           else if(ch2[i]=='e'||ch2[i]=='E')p=5;
           else if(ch2[i]=='f'||ch2[i]=='F')p=6;
           else if(ch2[i]=='g'||ch2[i]=='G')p=7;
           else if(ch2[i]=='h'||ch2[i]=='H')p=8;
           else if(ch2[i]=='i'||ch2[i]=='I')p=9;
           else if(ch2[i]=='j'||ch2[i]=='J')p=10;
           else if(ch2[i]=='k'||ch2[i]=='K')p=11;
           else if(ch2[i]=='l'||ch2[i]=='L')p=12;
           else if(ch2[i]=='m'||ch2[i]=='M')p=13;
           else if(ch2[i]=='n'||ch2[i]=='N')p=14;
           else if(ch2[i]=='o'||ch2[i]=='O')p=15;
           else if(ch2[i]=='p'||ch2[i]=='P')p=16;
           else if(ch2[i]=='q'||ch2[i]=='Q')p=17;
           else if(ch2[i]=='r'||ch2[i]=='R')p=18;
           else if(ch2[i]=='s'||ch2[i]=='S')p=19;
           else if(ch2[i]=='t'||ch2[i]=='T')p=20;
           else if(ch2[i]=='u'||ch2[i]=='U')p=21;
           else if(ch2[i]=='v'||ch2[i]=='V')p=22;
           else if(ch2[i]=='w'||ch2[i]=='W')p=23;
           else if(ch2[i]=='x'||ch2[i]=='X')p=24;
           else if(ch2[i]=='y'||ch2[i]=='Y')p=25;
           else if(ch2[i]=='z'||ch2[i]=='Z')p=26;
           sum2=sum2+p;
        }
        count=0;
        while(1){
            while(sum!=0){
                q=sum%10;
                count=count+q;
                sum=sum/10;
            }
           if(count>9){
                sum=count;
                count=0;
           }
           else break;
        }
        count1=0;
        while(1){
            while(sum2!=0){
                q=sum2%10;
                count1=count1+q;
                sum2=sum2/10;
            }
           if(count1>9){
                sum2=count1;
                count1=0;
           }
           else break;
        }
       if(count>count1){
            temp=count;
            count=count1;
            count1=temp;
        }

        yes=(double)count/(double)count1;
        printf("%.2f %%\n",(yes*100));
    }
    return 0;
}
