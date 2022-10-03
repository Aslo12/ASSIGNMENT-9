//MENU DRIVEN PROGRAM WITH THE FOLLOWING OPTIONS :
#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("enter your choice");
    printf("\n1:to check isoceles triangle");
    printf("\n2:to check right angle triangle");
    printf("\n3:to check equilateral triangle\n");
    scanf("%d",&choice);
    printf(" Enter length of 3 sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    switch(choice)
    {
     case 1:
      if (a==b || b==c || c==a)
      printf("isoceles triangle");
      else
      printf("Not an isoceles triangle");
      break;

      case 2:
      if (a*a==b*b+c*c|| b*b==c*c+a*a|| c*c==a*a+b*b)
      printf("right angle triangle");
      else
      printf("not a right angle triangle");
      break;

      case 3:
      if ((a==b)&&(b==c))
      printf("equilateral triangle");
      else
      printf("Not a equilateral triangle");
      break;

      default:
      printf("invalid ");
    }
    printf("\n")
    }
    return 0;
}

    



