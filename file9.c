#include<stdio.h>
void main()
{
 int n,rev=0,rem;
 printf("Enter a number:");
 scanf("%d",&n);
 while(n!=0)
 {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
 }
 printf("The reversed number is: %d",rev);
 int revten=rev+10;
 printf("\nThe reversed number + 10: %d",revten);
}  
