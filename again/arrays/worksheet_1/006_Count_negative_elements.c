#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,neg=0;
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
     for(int i=0;i<a;i++)
     {
          if((*ptr)<0)
          {
               neg++;
          }
          ptr++;
     }
     printf("the no of negative elements are:%d\n",neg);
}