# include <stdio.h>
 int main()
 {

     int n,a[12],b[12],i,k=1;
     while(scanf("%d",&n) && n>=0)
     {
     for(i=0;i<12;i++)
     scanf("%d",&a[i]);
     for(i=0;i<12;i++)
     scanf("%d",&b[i]);
     printf("Case %d:\n",k++);
         for(i=0;i<12;i++)
         {
           if(n>=b[i])
           {
               printf("No problem! :D\n");
               n = n-b[i];
           }
           else
               printf("No problem. :(\n");


            n = n+ a[i];
         }

     }
     return 0;
 }
