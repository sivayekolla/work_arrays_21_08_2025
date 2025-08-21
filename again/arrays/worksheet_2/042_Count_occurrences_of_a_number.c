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
     int b;
     printf("enter the number to count:\n");
     scanf("%d",&b);int count =0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]==b)
          {
               count++;
          }
     }
     printf("%d",count);
     
}