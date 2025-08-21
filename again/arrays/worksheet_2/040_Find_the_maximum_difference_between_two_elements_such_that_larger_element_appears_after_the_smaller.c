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
     int min=arr[0],max_diff=arr[1]-arr[0];
     for(int i=1;i<a;i++)
     {
          if(arr[i]-min>max_diff)
               max_diff=arr[i]-min;
          if(arr[i]<min)
               min=arr[i];
     }
     printf("maximum difference: %d\n",max_diff);
}
