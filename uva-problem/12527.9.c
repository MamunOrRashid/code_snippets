
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 int n,m,sum,arr[10],k,i,j,s,coun,x;
 while(scanf("%d %d",&n,&m)==2)
 {
     sum=0;
     for(i=n;i<=m;i++)
     {
         k=i;
         s=0;
         while(k>0)
         {
            arr[s++]=k%10;
             k=k/10;
         }
         coun=0;
         for(j=0;j<s-1;j++)
         {
             for(x=j+1;x<s;x++)
             {
                 if(arr[j]==arr[x])
                 {
                     coun=1;
                     break;
                 }
             }
             if(coun==1)
             {
                 break;
             }
         }
         if(coun==0)
         {
             sum++;
         }
   // memset(arr,0,sizeof(arr));
     }
    printf("%d\n",sum);
 }


 }


