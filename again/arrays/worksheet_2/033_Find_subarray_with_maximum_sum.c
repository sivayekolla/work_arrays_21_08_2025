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
     int max=arr[0],curr=arr[0];
     for(int i=1;i<a;i++)
     {
          if(curr<0)
               curr=arr[i];
          else
               curr+=arr[i];
          if(curr>max)
               max=curr;
     }
     printf("Maximum contiguous sum is %d\n",max);
}
