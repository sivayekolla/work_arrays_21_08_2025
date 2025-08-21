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
     int n = a + 2;
     int total_sum = n * (n + 1) / 2;
     int arr_sum = 0;
     for(int i=0;i<a;i++)
     {
          arr_sum += arr[i];
     }
     int sum_miss = total_sum - arr_sum;
     int avg = sum_miss / 2;
     int sum1 = 0, sum2 = 0;
     for(int i=0;i<a;i++)
     {
          if(arr[i]<=avg)
               sum1 += arr[i];
          else
               sum2 += arr[i];
     }
     int expe_sum1 = avg * (avg + 1) / 2;
     int expe_sum2 = total_sum - expe_sum1;
     int miss1 = expe_sum1 - sum1;
     int miss2 = expe_sum2 - sum2;
     printf("missing numbers: %d %d\n", miss1, miss2);
}
