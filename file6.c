#include<stdio.h>
void main()
{
 char op;
 int a,b,sum;
 printf("Enter any of the following operator:");
 printf(" + , - , * , / ");
 scanf("%c",&op);
 printf("Enter two numbers:");
 scanf("%d %d",&a,&b);
 
 if(op=='+')
 {
  sum=a+b;
  printf("sum of the numbers :%d",sum);
 }
 else if(op=='-')
 {
  if(a>b)
  {
   sum=a-b;
   printf("difference between the numbers :%d",sum);
  }
  else
  { 
   printf("invalid",sum);
  }
 } 
 else if(op=='*')
 {
   sum=a*b;
   printf("product of the numbers :%d",sum); 
 }
 else if(op=='/')
 {
  if(a>b && b!=0)
  {
   sum=a/b;
   printf("division:%d",sum);
  }
  else
  {
    printf("invalid",sum);
  }
 }
else
{
 printf("invalid",sum);
} 
}

      
     
    
  
 
