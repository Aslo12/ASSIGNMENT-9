//menu driven program with the following options.
#include<stdio.h>
int main()
{
    int x,a,b;

    printf ("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\n enter your choice");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1:
        {
         printf("\nenter two Number");
         scanf("\n%d%d",&a,&b);
         printf("Sum is %d", a+b);
         break;
        }
          
          case 2:
          {
         printf("enter two Number");
         scanf("%d%d",&a,&b);
         printf("Sum is %d", a-b);
         break;  
          }

           case 3:
           {
         printf("enter two Number");
         scanf("%d%d",&a,&b);
         printf("Sum is %d", a*b);
         break;
           }

           case 4:{
         printf("enter two Number");
         scanf("%d%d",&a,&b);
         printf("Sum is %d", a/b);
         break;
           }

           case 5:
           {
            exit(0);
           }

         default:
         printf("Invalid choice");

    }
    return 0;
}