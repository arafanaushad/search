#include<stdio.h>
void insertion(int[],int);
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
  insertion(a,n);
  printf("The sorted array : ");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
void insertion(int a[],int n)
{
    int i,temp,x;
    for(i=1;i<n;i++)
	{
	  temp=i;
	   x=a[i];
	 while(temp>0 & a[temp-1]>x)
	  {
	    a[temp]=a[temp-1];
	    temp=temp-1;
	  }
	a[temp]=x;
       }
}
