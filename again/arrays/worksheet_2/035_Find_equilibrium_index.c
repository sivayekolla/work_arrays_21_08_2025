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
     int total=0;
     for(int i=0;i<a;i++)
     {
          total+=arr[i];
     }
     int left=0,found=0;
     for(int i=0;i<a;i++)
     {
          total-=arr[i];
          if(left==total)
          {
               printf("Equilibrium index: %d\n",i);
               found=1;
               break;
          }
          left+=arr[i];
     }
     if(found==0)
     {
          printf("No equilibrium index found\n");
     }
}
