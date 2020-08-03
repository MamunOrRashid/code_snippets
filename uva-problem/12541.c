#include <stdio.h>

int main()
{
    int n,i,j,x,y,z,small,yes[100],t1,t2,big;
    char name1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        getchar();
        scanf("%s",name1);
        for(j=0;j<3;j++){
            scanf("%d%d%d",&x,&y,&z);
            yes[i]=x*10000+y*100+z;
        }
    }
    yes[0]=small;
    for(i=0;i<n;i++){
        if(small>yes[i+1]){
            small=yes[i+1];
                t1=i+1;
        }
    }
    yes[0]=big;
    for(i=0;i<n;i++){
        if(big<yes[i+1]){
            big=yes[i+1];
                t2=i+1;
        }
    }
   // printf("%s\n",name[t2]);
    //printf("%s\n",name[t1]);
    return 0;
}
