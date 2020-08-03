/*//Steven Kester Yuwono - UVa 12620
#include <bits/stdc++.h>
using namespace std;

int fib[310];
int sum[310];

void build(){
	fib[1]=1;
	fib[2]=1;
	for(int i=3;i<310;i++){
		fib[i]=fib[i-1]+fib[i-2];
		if(fib[i]>=100){
			fib[i]=fib[i]%100;
		}
	}
}
void build2(){
	memset(sum,0,sizeof(sum));
	sum[1]=1;
	sum[2]=2;
	for(int i=3;i<301;i++){
		sum[i]=sum[i-1]+fib[i];
	}
	return;
}

long long getSum(long long input){
	long long remainder = input%300;
	long long divisor = input/300;
	long long answer = divisor*sum[300];
	answer=answer+sum[remainder];
	return answer;
}

int main(){
	build();
	build2();
	int tc;
	cin >> tc;
	while(tc--){
		long long low,high;
		cin >> low >> high;
		cout << getSum(high)-getSum(low-1) << endl;
	}
	return 0;
}*/

#include <stdio.h>
int f1 = 1, f2 = 1, f3;
int i, j;
int A[305] = {0,1}, cycle;
int C[305];
void build()
{
    for(i = 2; ; i++)
    {
        if(f1 == 1 && f2 == 1 && i != 2)
            break;
        A[i] = f2;
       printf("A[%d] = %d\n",i,A[i]);
        f3 = f1 + f2;
        f1 = f2, f2 = f3%100;
    }
   /** cycle = i-2;
    for(i = 1; i <= cycle; i++)
        C[i] = C[i-1] + A[i];
    printf("%d ",C[0]);
    printf("%d ",C[1]);
    printf("%d ",C[2]);
    printf("%d",C[3]);*/
}
/*long long get(long long n)
{
    return n/cycle*C[cycle] + C[n%cycle];
}*/
int main()
{
    build();
    int testcase;
    long long L, R;
    scanf("%d", &testcase);
    while(testcase--)
    {
        scanf("%lld %lld", &L, &R);
       // printf("%lld\n", get(R)-get(L-1));
    }
    return 0;
}
