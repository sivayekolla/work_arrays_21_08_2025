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
     int total=(a+1)*(a+2)/2,sum=0;
     for(int i=0;i<a;i++)
     {
          sum+=arr[i];
     }
     printf("missing number is: %d\n",total-sum);
}
