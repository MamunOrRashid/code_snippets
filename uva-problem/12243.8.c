#include <stdio.h>
#include <string.h>

int main()
{
    char ch[400],p[400];
    int len,i,j,r,k,m,flag;
    while(gets(ch)){
        if(ch=="*")break;
        flag=0;
        len=strlen(ch);
        strupr(ch);
        m=0;
        for(i=0;i<len;i=j+1){
            for(j=0;ch[j]!=' ';j++){
                if(j==0){
                  p[m]=ch[i];
                  printf("%c\n",ch[m]);
                  m++;

                }
            }
        }
       /* for(r=0;r<m;r++){
            printf("%c\n",p[r]);
        }*/

       /* for(r=0;r<m;r++){
            if(p[r]!=p[r+1]){
                flag=1;
                break;
            }
        }
        if(flag==0)printf("Y\n");
        else printf("N\n");*/
    }
    return 0;
}
