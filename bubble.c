#include<stdio.h>
void bubble(int[],int);
void main()
{
  int i,n,a[10];
  printf("Enter the limit : ");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for(i=0;i<n;i++)
   { 
     scanf("%d",&a[i]);
   }
  bubble(a,n);
}
void bubble(int a[],int n)
{
  int i,j,t;
  for(i=0;i<n;i++)
   {
     for(j=0;j<n-1-i;j++)
      { 
        if(a[j]>a[j+1])
        {  
          t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
        }
      }
   }
 printf("The sorted array : ");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
        
