#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter the three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
   printf("%d is greater:",a);
 }  
 if(b>a && b>c)
 {
   printf("%d is greater:",b); 
 } 
 else
 {
   printf("%d is greater:",c); 
 }
}   

