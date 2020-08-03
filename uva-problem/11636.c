#include <stdio.h>

int main()
{
    int i,N;

    for(i=1;i<=2000;i++){
        scanf("%d",&N);
        if(N<0)break;
        else if(N==1)printf("Case %d: 0\n",i);
         else if(N==2)printf("Case %d: 1\n",i);

            else if(N>=3 && N<=4)printf("Case %d: 2\n",i);
            else if(N>=3 && N<=4)printf("Case %d: 2\n",i);
            else if(N>=5 && N<=8)printf("Case %d: 3\n",i);
            else if(N>=9 && N<=16)printf("Case %d: 4\n",i);
            else if(N>=17 && N<=32)printf("Case %d: 5\n",i);
            else if(N>=33 && N<=64)printf("Case %d: 6\n",i);
            else if(N>=65 && N<=128)printf("Case %d: 7\n",i);
            else if(N>=129 && N<=256)printf("Case %d: 8\n",i);
            else if(N>=257 && N<=512)printf("Case %d: 9\n",i);
            else if(N>=513 && N<=1024)printf("Case %d: 10\n",i);
            else if(N>=1025 && N<=2048)printf("Case %d: 11\n",i);
            else if(N>=2049 && N<=4096)printf("Case %d: 12\n",i);
            else if(N>=4097 && N<=8192)printf("Case %d: 13\n",i);
            else if(N>=8193 && N<=10000)printf("Case %d: 14\n",i);

    }
}
