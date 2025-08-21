#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     int *ptr=arr;
     int *ptr1=arr+(a-1);
     for(int i=0;i<(a/2);i++)
     {
          int temp=*ptr;
          *ptr=*ptr1;
          *ptr1=temp;
          ptr++;ptr1--;
     }
     for(int i=0;i<a;i++)
     {
          printf("%d",arr[i]);
     }



}