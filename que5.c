// if-else-if construct into switch case..
#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
       
    printf("enter your choice");
    printf("\n1:to print good ");
     printf("\n2:to print better");
      printf("\n3:to print best\n");
  scanf("%d",&choice);
   
   switch(choice)
{

    case 1:
    printf("Good\n");
    break;

    case 2:
    printf("Better\n");
    break;

    case 3:
    printf("Best\n");
    break;

    default:
    printf("invalid choice");

}
    }// end of while
return 0;
}