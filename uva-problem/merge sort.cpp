/* C program for Merge Sort */
#include <iostream>
#include <cstdio>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int lf, int m, int r)
{
    int i, j, k;
    int n1 = m - lf + 1;
    int n2 =  r - m;

    //create temp arrays
    int L[n1], R[n2];

    //Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[lf + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = lf; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            printf("m -> %d\n",arr[k]);
            i++;
        }
        else
        {
            arr[k] = R[j];
            printf("n-> %d\n",arr[k]);
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        printf("m1 -> %d\n",arr[k]);
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2)
    {
        arr[k] = R[j];
        printf("n1 -> %d\n",arr[k]);
        j++;
        k++;
    }
}

//   l is for left index and r is right index of the
//   sub-array of arr to be sorted
void mergeSort(int arr[], int lf, int r)
{
    if (lf < r)
    {
//        printf("m=%d r= %d\n\n\n",m,r);
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = lf+(r-lf)/2;
        printf("lf=%d m=%d r= %d\n\n\n",lf,m,r);
        // Sort first and second halves
        mergeSort(arr, lf, m);
        printf(" 1 -> lf=%d m=%d r=%d\n",lf,m,r);
        /// printf("yes\n");
        mergeSort(arr, m+1, r);
        printf(" 2 -> lf=%d m=%d r=%d\n",lf,m+1,r);
        ///printf("no\n");

        /// printf("4.1== lf=%d m=%d r=%d\n",lf,m,r);
        merge(arr, lf, m, r);
        printf(" Merge -> lf=%d m=%d r=%d\n",lf,m,r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int a[],int size)
{

    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};


    int arr_size=sizeof(arr)/sizeof(arr[0]);

    printf("Given array: \n");
    printArray(arr,arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
