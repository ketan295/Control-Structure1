#include<stdio.h>

main()
{
 int no;
 
 printf("Enter the number\n");
 scanf("%d",&no);
 
 if(no>0)
 {
  printf("Given number is positive\n");
 }
 else if(no<0)
 {
  printf("Given number is negative");
 }
 else
 {
  printf("Given number is neutral");
 }
}