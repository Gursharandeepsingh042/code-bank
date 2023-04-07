#include<stdio.h>
void main(){
int arr[100]={0};

//varaible declaration
int i,x,n,pos;
// initial size
 for(i=0; i<=n; i++){
        arr[i]=i+1;
    }
// print the original array
printf("original array:");
    for(i=0; i<n;i++)
        printf("%d ",arr[i]);
       printf("\n");
    // enter the position of the element to be deleted
    printf( " Define the position of the array element where you want to delete: \n ");
    scanf (" %d", &pos);

    // check whether the deletion is possible or not
    if (pos >= n+1)
    {
        printf (" \n Deletion is not possible in the array.");
    }
    else
    {
        // use for loop to delete the element and update the index
        for(i = pos - 1; i < n; i++)
        {
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]
        }

        printf (" \n The resultant array is: \n");

        // display the final array
        for (i = 0; i< n; i++)
        {
            printf(" %d ", arr[i]);
        }
    }
    return 0;
}
