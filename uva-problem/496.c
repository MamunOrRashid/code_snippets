#include <stdio.h>
#include <string.h>

int main()
{
    long long int len_1,len_2,i,j,yes,flag,k,e=1000000,f=1000000;
    char ch1[e],ch2[f];

    while(1){
        gets(ch1);
        gets(ch2);
        len_1=strlen(ch1);
        len_2=strlen(ch2);
        yes=0;

        if(len_1<len_2){
            for(j=0;j<len_1;j++){
                if(ch1[j]==ch2[j]){
                    yes++;
                }
            }
            if(len_1==yes)printf("A is a proper subset of B\n");
        }
        else if(len_1>len_2){
            for(j=0;j<len_2;j++){
                if(ch1[j]==ch2[j]){
                    yes++;
                }
            }
            if(len_2==yes)printf("B is a proper subset of A\n");
        }
        else if(strcmp(ch1,ch2)==0){
                    printf("A equals B\n");
             }
         else if(strcmp(ch1,ch2)!=0 && len_1==len_2){
                 flag=0;

                for(i=0;i<len_1;i=i+2){
                  for(k=0;k<len_1;k=k+2){
                    if(ch1[i]==ch2[k]){
                        flag=1;
                        break;
                    }
                  }
                  if(flag==1)break;
                }
                if(flag==1)printf("I'm confused!\n");
                else if(flag==0)printf("A and B are disjoint\n");
        }

    }
        return 0;
}
