#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,b;
     printf("enter no of elements in arr1:\n");
     scanf("%d",&a);
     printf("enter no of elements in arr2:\n");
     scanf("%d",&b);
     int *arr1=(int *)malloc(sizeof(int)*a);
     int *arr2=(int *)malloc(sizeof(int)*b);
     printf("enter then values to array 1 and 2:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr1[i]);
     }
     for(int i=0;i<b;i++)
     {
          scanf("%d",&arr2[i]);
     }
     printf("\n");
     for(int i=0;i<a;i++)
     {
          int count=0;
          for(int j=0;j<b;j++)
          {
               if(arr1[i]==arr2[j])
               {
                    count++;
               }
          }
          if(count==0)
          {
               printf("%d",arr1[i]);
          }
     }




}