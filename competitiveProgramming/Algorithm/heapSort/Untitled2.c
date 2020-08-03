#include <stdio.h>
#include <math.h>

int heapSort(int array[],int sizetocall);
int heapify(int array[],int parent);
int swp(int *x,int *y);
int two(int array[],int lc,int parent);
int three(int array[],int lc,int rc,int parent);
void show(int arr[],int nsize);

int size;
int main()
{
    int arr[1010],i,temp,T;
    scanf("%d",&T);
    while(T--){
    //printf("Enter n:\n");
    scanf("%d",&size);
    temp=size;
    for(i=1; i<=size; i++) scanf("%d",&arr[i]);

    heapSort(arr,size);
    show(arr,temp);
    printf("\n");
    }
    return 0;
}
int heapSort(int array[],int sizetocall)
{
    int parent,i;
    for(i=1; i<=sizetocall; i++)
    {
        parent=size/2;
        while(parent>0)
        {
            heapify(array,parent);
            parent--;
        }
        swp(&array[1],&array[size]);
        size--;
    }
}
int heapify(int array[],int parent)
{
    int largest,lc,rc;
    largest=parent;
    lc=(parent*2);
    rc=(parent*2)+1;
    if(rc<=size)largest=three(array,lc,rc,parent);
    else largest=two(array,lc,parent);

    if(largest!=parent && largest<=size)
    {
        swp(&array[largest],&array[parent]);
        heapify(array,parent);
    }
}
int swp(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int two(int array[],int lc,int parent)
{
    if(array[lc]>array[parent]) return lc;
    else return parent;
}
int three(int array[],int lc,int rc,int parent)
{
    if(array[parent]>array[lc] && array[parent]>array[rc]) return parent;
    else
    {
        if(array[lc]>array[rc]) return lc;
        else return rc;
    }
}
void show(int arr[],int nsize)
{
    int i;
    for(i=1; i<=nsize; i++)
    {
        printf("%d",arr[i]);
        if(i<=(nsize-1))printf(" ");

    }
}

