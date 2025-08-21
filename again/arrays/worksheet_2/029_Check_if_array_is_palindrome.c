#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     int *first=arr;
     int *last=arr+a-1;
     int flag=0;
     for(int i=0;i<(a/2);i++)
     {
          if(*first != *last)
          {
               flag=1;
               break;
          }
          first++;last--;
     }
     if(!flag)
     {
          printf("the array is a palindrome");
     }
     else
     {
          printf("the arraynis not a palindrome");
     }
}