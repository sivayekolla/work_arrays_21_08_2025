#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     int *arr1=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     for(int i=0;i<a;i++)
     {
          arr1[i]=arr[i];
     }
     for(int i=0;i<a;i++)
     {
          printf("copied array:%d",arr1[i]);
     }

}

