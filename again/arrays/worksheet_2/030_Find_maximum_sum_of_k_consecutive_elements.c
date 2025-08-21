#include<stdio.h>
#include<stdlib.h>
int amin()
{
     int a,b;
     printf("enter no of array elements\n");
     scanf("%d",&a);
     printf("enter no of elements to sum:\n");
     scanf("%d",&b);
     int *arr=(int *)malloc(sizeof(int)*a);
     int min=-1;
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<a;i++)
     {
          int max=0;
          for(int j=0;j<b;j++)
          {
               max=arr[i+j];
          }
          if(max>min)
          {
               min=max;
          }
     }
     printf("%d",min);


}