//program for convet positive number into negative number and negative number into positive number.
#include<stdio.h>
int main()
{
    int choice,n;
    printf("enter your choice\n");
    printf("1: convert positive no.. into negative no..\n");
     printf("2: convert negative no.. into positive no..\n");
     scanf("%d",&choice);
     printf("\n enter number");
     scanf("%d",&n);

     switch(n)
     {
         case 1:
         printf("Number is -%d",n);
         break;

         case 2:
         printf("Number is %d",n);
         break;

         default:
         printf("invalid choice");

     }
     return 0;
}