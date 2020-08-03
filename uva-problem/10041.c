#include <stdio.h>
#include <math.h>

int main()
{
    int r,s,ch[30005],min,temp,sum,k,m,i,j;
    while(scanf("%d",&r)!=EOF)
    {
        for(i=1; i<=r; i++)
        {
            scanf("%d",&s);
            for(j=0; j<s; j++)
            {
                scanf("%d",&ch[j]);
            }
            for(j=0; j<s-1; j++)
            {
                for(k=j+1; k<s; k++)
                {
                    if(ch[j]>ch[k])
                    {
                        temp=ch[j];
                        ch[j]=ch[k];
                        ch[k]=temp;
                    }
                }

            }

            for(j=0;j<s;j++){
                sum=0;
                for(m=0;m<s;m++){
                    sum=sum+abs(ch[m]-ch[j]);
                }
                if(j==0)min=sum;
                if(sum<min)min=sum;
             }

            printf("%d\n",min);

        }
    }
    return 0;

}
