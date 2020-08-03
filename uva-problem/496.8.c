#include <stdio.h>

int main()
{
    int a[60],b[60],i,j,p,q,s,t,count,flag,l,m,v,k;
    char ch1,ch2;
    while(1){
        for(i=0;;i++){
            scanf("%d%c",&a[i],&ch1);
            if(ch1=='\n')break;
        }
        p=i;
        for(j=0;;j++){
            scanf("%d%c",&b[j],&ch2);
            if(ch2=='\n')break;
        }
        flag=0;
        q=j;
        count=0;
        if(p==q){
            for(k=0;k<=p;k++){
                if(a[k]==b[k]){
                    count++;
                }
            }
            if(i==count-1)printf("equal\n");

            else{
                for(l=0;l<=p;l++){
                    for(m=0;m<=p;m++){
                        if(a[l]==b[m]){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)break;
                }
                if(flag==1)printf("I'm confused!\n");
                else if(flag==0) printf("A and B are disjoint\n");
            }

        }

        else if(p>q){
            s=0;
            for(v=0;v<=q;v++){
                if(a[v]==b[v]){
                    s++;
                }
            }
            if(q==s-1)printf("B is a proper subset of A\n");
        }
        else if(p<q){
            t=0;
            for(v=0;v<=p;v++){
                if(a[v]==b[v]){
                    t++;
                }
            }
            if(p==t-1)printf("A is a proper subset of B\n");
        }

    }
    return 0;
}
