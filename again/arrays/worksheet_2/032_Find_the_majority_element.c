#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter the values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int count=0,can=0;
     for(int i=0;i<a;i++)
     {
          if(count==0)
          {
               can=arr[i];
               count=1;
          }
          else if(arr[i]==can)
          {
               count++;
          }
          else
          {
               count--;
          }
     }
     count=0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]==can)
               count++;
     }
     if(count>a/2)
          printf("Majority element: %d\n",can);
     else
          printf("No majority element\n");
}
