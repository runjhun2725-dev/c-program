include<stdio.h>
int merge(int arr[],int i,int j,int k)
{
    int n1=j-i+1;
    int n2=k-j;
    int a[n1],b[n2];
    for(int x=0;x<n1;x++)
    {
        a[x]=arr[i+x];
    }
    for(int x=0;x<n2;x++)
    {
        b[x]=arr[j+1+x];
    }
    int x=0,y=0,z=i;
    while(x<n1 && y<n2)
    {
        if(a[x]<b[y])
        {
            arr[z++]=a[x++];
        }
        else
        {
            arr[z++]=b[y++];
        }
    }
    while(x<n1)
    {
        arr[z++]=a[x++];
    }
    while(y<n2)
    {
        arr[z++]=b[y++];
    }       
}
void merge_sort(int arr[],int i,int k)
{
    if(i<k)
    {
        int j=(i+k)/2;
        merge_sort(arr,i,j);
        merge_sort(arr,j+1,k);
        merge(arr,i,j,k);
    }
}
int main()
{
    int arr[]={38,27,43,3,9,82,10};
    int n=sizeof(arr)/sizeof(arr[0]);                                       
    merge_sort(arr,0,n-1);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)

    {
        printf("%d ",arr[i]);
    }
    return 0;
}   

