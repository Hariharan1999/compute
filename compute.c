#include<stdio.h>
int func(int n,int a[100])
{
  int i,sum=0;
  for(i=0; i<n; i++)
  {
     scanf("%d",&a[i]);
     sum=sum+a[i];
  }
   printf("%d",sum);
return 0;
}
void main()
{
  int n, a[100],i, sum = 0;
  
  printf("Please Enter any Integer Value\n");
  scanf("%d", &n);
  printf("Enter the %d elements",n);
  func(n,a);
 }
