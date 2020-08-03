#include <bits/stdc++.h>

int main()
{
    long long int n,t=0,output,a,b,c,d,e,f,g,h,i,j,k,l,m,o,p;
    while(scanf("%lld",&n)==1){
        t++;
        printf("%4lld.",t);
        output=n/100000000000000;
        if(output>0)printf(" %lld kuti",output);
        a=n%100000000000000;

        b=a/1000000000000;
        if(b>0)printf(" %lld lakh",b);
        c=a%1000000000000;
        d=c/10000000000;
        if(d>0)printf(" %lld hajar",d);
        e=c%10000000000;
        f=e/1000000000;
        if(f>0)printf(" %lld shata",f);
        g=e%1000000000;
        h=g/10000000;
        if(h>0)printf(" %lld kuti",h);
        i=g%10000000;
        j=i/100000;
        if(j>0)printf(" %lld lakh",j);
        k=i%100000;
        l=k/1000;
        if(l>0)printf(" %lld hajar",l);
        m=k%1000;
        o=m/100;
        if(o>0)printf(" %lld shata",o);
        p=m%100;
        if(p>0)printf(" %lld",p);
        else if(n==0) printf(" 0");
        printf("\n");

    }

    return 0;
}
