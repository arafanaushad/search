#include<stdio.h>
void selection(int[],int);
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
  selection(a,n);
  printf("The sorted array : ");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
void selection(int a[],int n)
{
  int small,pos,temp,i,j;
  for(i=0;i<n;i++)
   {
     small=a[i];
     pos=i;
     for(j=i+1;j<n;j++)
      {
        if(small>a[j])
         { 
           small=a[j];
           pos=j;
         }
      }
   temp=a[i];
   a[i]=a[pos];
   a[pos]=temp;
  }
}

