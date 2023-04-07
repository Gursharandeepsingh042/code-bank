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
	  // element to be inserted
    printf("enter the number to be inserted :");
    scanf("%d", &x);
    // position at which element has to be inserted
     printf("enter the position :");
    scanf("%d",&pos);
    n++;
    // increASE THE SIZE BY 1



    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];

    // insert x at pos
    arr[pos - 1] = x;

    // print the updated array
     printf("updated array:");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}  
