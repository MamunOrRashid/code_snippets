#include <iostream>
#include <cstdio>
using namespace std;
void merge(int arr[],int lf,int m,int r)
{
    int i,j,k;
    int n1=m-lf+1;
    int n2=r-m;
    int L[n1],R[n2];

    for(i=0;i<n1;i++) L[i]=arr[lf+i];
    for(j=0;j<n2;j++) R[j]=arr[m+1+j];
    i=j=0;
    k=lf;
    while(i<n1 && j<n2){
        if(L[i]>=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
           arr[k]=R[j];
           j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int lf,int r)
{
    if(lf<r){
        int m=lf+(r-lf)/2;
        mergesort(arr,lf,m);
        mergesort(arr,m+1,r);
        merge(arr,lf,m,r);
    }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n,arr[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int arr_size=n;

    mergesort(arr,0,arr_size-1);

    PrintArray(arr,arr_size-1);
    return 0;
}
