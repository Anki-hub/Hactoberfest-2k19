#include<stdio.h>
int main()
{
 int n,a[100],i,j,temp;
 printf("Enter no of terms");
 scanf("%d",&n);
 printf("Enter elements one by one\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
     }
    }
  }
  printf("The sorted Array is\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
 }
