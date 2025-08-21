#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,flag=1;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n");
     printf("the even elements are:\t");
     for(int i=0;i<a;i++)
     {
         if((arr[i]%2)==0)
         {
               printf("%d   ",arr[i]);
         }
     }
     printf("\n");
     printf("the odd elements are:\t");
     for(int i=0;i<a;i++)
     {
         if((arr[i]%2)!=0)
         {
               printf("%d   ",arr[i]);
         }
     }
}