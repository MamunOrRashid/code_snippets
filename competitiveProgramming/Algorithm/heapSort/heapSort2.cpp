#include <bits/stdc++.h>
using namespace std;
int heapSort(int array[],int sizetocall);
int heapify(int array[],int parent);

int two(int array[],int lc,int parent);
int three(int array[],int lc,int rc,int parent);
void show(int arr[],int nsize);

int size;
int main()
{
    int arr[1010],i,temp;

    printf("Enter size:\n");
    scanf("%d",&size);
    temp=size;
    printf("Enter elements:");
    for(i=1; i<=size; i++) scanf("%d",&arr[i]);

    heapSort(arr,size);
    show(arr,temp);
    printf("\n");

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
        //swp(&array[1],&array[size]);
        swap(array[1],array[size]);
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
        //swp(&array[largest],&array[parent]);
        swap(array[largest],array[parent]);

        heapify(array,parent);
    }
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

