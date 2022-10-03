// PROGRAM WHICH TAKES THE MONTH NUMBER AS AN INPUT AND DISPLAY NUMBER OF DAYS IN THAT MONTH.
#include<stdio.h>
int  main()
{
    int n;

    printf("enter month number");
    scanf("%d",&n);

     switch(n)
     {
  case 1:
  {
        printf("Jnauary");
        break;
  }

   case 2:
   {
          printf("February");
        break;
   }

    case 3:
    {
            printf("March");
        break;  
    }  
    case 4:
    {
            printf("April");
        break;
    }

    case 5:
    {
            printf("May");
        break;
    }
    case 6:
    {
            printf("June");
        break;
    }
    case 7:
    {
          printf("July");
        break;
    }
    case 8:
    {
         printf("August");
        break;
    }
    case 9:
    {
          printf("September");
        break;   
    }                           
    case 10:
    {
           printf("October");
        break;
    }
     case 11:
     {
           printf("November");
        break;
     }
    case 12:
    {
      printf("December");
        break;   
    }
     default :
     printf("Invalid choice");     
     }
    
    return 0;
}