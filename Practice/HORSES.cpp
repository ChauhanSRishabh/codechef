#include<stdio.h>
int arr[5000];
//void merge(int,int,int);
 
void merge(int l1,int m1,int h1)
{
    int i,j,k=0,temp[5000];
    i=l1;j=m1+1;
    while(i<=m1 && j<=h1)
    {
        if(arr[i]>arr[j])
        temp[k++]=arr[j++];
        else
        temp[k++]=arr[i++];
    }
    while(i<=m1)
    temp[k++]=arr[i++];
 
    while(j<=h1)
    temp[k++]=arr[j++];
 
    for(i=l1,j=0;i<=h1;i++,j++)
    arr[i]=temp[j];
}
 
void mergesort(int l,int n)
{
 
    if(l<n)
    {
     int mid;
     mid=(l+n)/2;
        mergesort(l,mid);
        mergesort(mid+1,n);
        merge(l,mid,n);
    }
}
 
 
int main()
{
 int n,i,a,m,min;
 scanf("%d",&n);
 while(n!=0)
 {
     scanf("%d",&a);
     for(i=0;i<a;i++)
     scanf("%d",&arr[i]);
     mergesort(0,a-1);
     min=arr[1]-arr[0];
    // for(i=0;i<a;i++)
     //printf("%d",arr[i]);
     for(i=0;i<a-1;i++)
     {
    m=(arr[i+1]-arr[i]);
      if(min>m)
       min=m;
     }
     printf("%d\n",min);
     n--;
 }
     return 0;
 }
 
