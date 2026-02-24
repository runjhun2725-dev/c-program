#include <stdio.h>
int main() {
    int arr[10],n,i,k,temp;
    printf("enter the elements in the array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {
        for(k=i;k<n-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k];
            arr[k]=arr[k+1];
        arr[k+1]=temp;
            }
            }
    }
    printf("sorted array: \n");
    for(i=0;i<n;i++)    {
        printf("%d ",arr[i]);
    }
    return 0;
}