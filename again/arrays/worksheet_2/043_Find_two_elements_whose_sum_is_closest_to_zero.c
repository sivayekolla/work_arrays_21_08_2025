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
     for(int i=0;i<a-1;i++)
     {
          for(int j=i+1;j<a;j++)
          {
               if(arr[i]>arr[j])
               {
                    int t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
               }
          }
     }
     int l=0,r=a-1,min=2147483647,x=0,y=0;
     while(l<r)
     {
          int sum=arr[l]+arr[r];
          if(abs(sum)<min)
          {
               min=abs(sum);
               x=arr[l];
               y=arr[r];
          }
          if(sum<0)
               l++;
          else
               r--;
     }
     printf("Pair whose sum is closest to zero: %d %d\n",x,y);
}
