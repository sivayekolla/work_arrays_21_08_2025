#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     for(int i=0;i<a;i++)
     {
        b=b+arr[i];  
     }
     printf("sum of elements of array:\t%d\n",b);

}