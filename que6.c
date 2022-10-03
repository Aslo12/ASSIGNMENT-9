 //PROGRAM TO CHECK WHETHER A YEAR IS  A LEAP YEAR OR NOT..
 #include<stdio.h>
 int main()
 {
     int n;
     while(1)
     {
     printf("enter year ");
     scanf("%d",&n);
      switch(n%100==0)
      {
     case 1:
      switch(n%400==0)
      {
          case 1:
          printf("leap year\n");
          break;
         case 0:
         printf("not leap year\n");
         break; 
      } break;

    case 0:
     switch(n%4==0)
     {
         case 1:
         printf("leap year\n");
         break;
         case 0:
         printf("not leap year\n");
         break;

     }break;

      }
     }// ends of loop
     return 0;
 }