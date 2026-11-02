#include<stdio.h>
void main()
{
 int n1,n2,r;
 char op;
 printf("Enter two number:");
 scanf("%d %d",&n1,&n2);
 printf("Enter an operator:");
 scanf(" %c",&op);
 switch(op)
 {
  case '+':
  r=n1+n2;
  
  break;
  case '-':
  r=n1-n2;
  
  break;
  case '*':
  r=n1*n2;
  
  break;
  case '/':
  if(n2!=0)
  {
   r=n1/n2;
  }
  else
  {
   printf("error,cannot divide by zero");
  }
  break;
  default:
   printf("invalid operator");
 }
 printf("Result:%d",r);
} 
   
     
 
