#include <stdio.h>
#include <math.h>
/*int heapSort(int array[], int sizetocall);
int show(int array[],int nsize);
int heapify(int array[], int pindex);
int swap(int *x, int *y);
int large_in_two(int array[],int parent,int left);
int large_in_three(int array[],int parent,int left,int right);
*/

int size;
int main()
{

    int ar[10000],i,temp;
    printf("Enter n:\n");
    freopen("yes.txt","r",stdin);
    scanf("%d",&size);
    temp=size;

    for(i=1;i<=size;i++){
        scanf("%d",&ar[i]);
    }
    //call heap
    heapSort(ar,size);

   // show(ar,temp);
    return 0;
}
int heapSort(int array[], int sizetocall)
{
    int i,pindex;
    for(i=0; i<sizetocall; i++)
    {
        //we will call heapify 7 time
        //we will get the parent size/2;
        pindex=size/2;
        //now we need to loop from last parent to the
        //first parent
        while(pindex>0)
        {
            heapify(array,pindex);
            //printf("pindex =%d =")
            pindex--;
        }
        //now we will get the largest element
        //swap it with the last emement
        swap(&array[1], &array[size]);
        //as last emement already sorted so we need to
        //reduce size
        size--;
    }
}

int heapify(int array[], int pindex)
{
    int largest, lc,rc;
    largest=pindex;
    lc=pindex*2;
    rc=(pindex*2) + 1;
    //some parent has left child some has left and right child
    //we have to find the largest element

    //test if the current parent has one or two child
    if(rc<=size)
    {
        largest=large_in_three(array,pindex,lc,rc);
    }
    else
    {
        largest=large_in_two(array,pindex,lc);
    }
    //if parent is >= child we need not swap
    if(pindex!=largest && largest <= size)
    {
        //we need swap
        swap(&array[pindex], &array[largest]);
        heapify(array, largest);
    }
}
int swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int large_in_two(int array[],int parent,int left)
{
    if(array[parent]>array[left])
    {
        return parent;
    }
    return left;
}
int large_in_three(int array[],int parent,int left,int right)
{
    if(array[parent]>array[left] && array[parent]>array[right])
    {
        return parent;
    }
    else
    {
        if(array[left]>array[right])
        {
            return left;
        }
        else
        {
            return right;
        }
    }

}
int show(int array[],int nsize){
    int i;
    for(i=1;i<=nsize;i++){
        printf("%d ",array[i]);
    }
}

