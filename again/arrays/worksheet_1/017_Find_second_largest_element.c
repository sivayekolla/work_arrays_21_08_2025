#include<stdio.h>
#include<stdlib.h>
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

     int *max=arr;
     int *min=arr;
     int max2=arr[0];
     for(int i=0;i<a;i++)
     {
          if(*(max)< *(arr+i))
          {
               max=arr+i;
          }
          if(*(min)> *(arr+i))
          {
               min=arr+i;
          }
     }
     for(int i=0;i<a;i++)
     {
          if(arr[i]>max2 && arr[i]<*(max))
          {
               max2=arr[i];
          }
     }
     printf("2nd max:%d",max2);
}