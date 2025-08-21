#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,flag=1;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int num;
     printf("enter element to find:\n");
     scanf("%d",&num);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     for(int i=0;i<a;i++)
     {
          if(num==arr[i])
          {
          printf("%d is the index of %d\n",i,num);
          flag=0;
          }
     }
     if(flag)
     {
          printf("element not found:");
     }
     
}