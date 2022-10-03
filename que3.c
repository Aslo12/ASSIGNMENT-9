// write a program which takes a day  number of a week and display a unique greeting  messages for the day ..
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day number of a week\n");
    scanf("%d",&day);
     
     switch(day)
     {
     case 1:
     printf("\ntoday is monday ");
     break;

      case 2:
     printf("\ntoday is tuesday");
     break;

      case 3:
     printf("\ntoday is wednesday");
     break;

      case 4:
     printf("\ntoday is thursday ");
     break;

      case 5:
     printf("\ntoday is friday ");
     break;

      case 6:
     printf("\ntoday is saturday ");
     break;
      case 7:
     printf("today is sunday ");
     break;
     
    default :
    printf("invalid choice");

     }
     return 0;

}
