#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int c0=0,c1=0,c2=0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]==0)
               c0++;
          else if(arr[i]==1)
               c1++;
          else
               c2++;
     }
     for(int i=0;i<c0;i++)
          arr[i]=0;
     for(int i=c0;i<c0+c1;i++)
          arr[i]=1;
     for(int i=c0+c1;i<a;i++)
          arr[i]=2;
     printf("Sorted array: ");
     for(int i=0;i<a;i++)
     {
          printf("%d ",arr[i]);
     }
}
