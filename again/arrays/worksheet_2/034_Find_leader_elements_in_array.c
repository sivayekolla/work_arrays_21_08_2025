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
     int max=arr[a-1];
     printf("Leader elements: %d ",max);
     for(int i=a-2;i>=0;i--)
     {
          if(arr[i]>max)
          {
               max=arr[i];
               printf("%d ",max);
          }
     }
}
