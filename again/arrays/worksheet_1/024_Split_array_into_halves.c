#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n");
     printf("the first half elements are:\t");
     for(int i=0;i<(a/2);i++)
     {
         printf("%d   ",arr[i]);
     }
     printf("\n");
     printf("the second half elements are:\t");
     for(int i=(a/2);i<a;i++)
     {
         printf("%d   ",arr[i]);
     }
}