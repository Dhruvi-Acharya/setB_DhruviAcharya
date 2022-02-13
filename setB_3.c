#include<stdio.h>

int reverseBits(int);

void main()
{
  int n;
    
  printf("Enter the number to convert: ");    
  scanf("%d",&n);    
  
  reverseBits(n);
}

int reverseBits(int n)
{
  int i,j,a[10];
  for(i=0;n>0;i++)    
  {    
    a[i]=n%2;    
    n=n/2;    
  }
  j=i;
  printf("Before: ");    
  for(i=i-1;i>=0;i--)    
  {    
    printf("%d",a[i]);    
  }
  printf("\nAfter: ");
  for(i=0;i<j;i++)    
  {    
    printf("%d",a[i]);    
  }
  printf("\n");
}
