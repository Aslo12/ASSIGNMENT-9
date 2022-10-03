//program to convert even number into its upper nearest odd number ..
#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
    printf("Enter even number \n");
    scanf("%d",&n);

    switch(n%2==0)
    {
        case 1:
        printf("%d",n+1);
        break;

        case 0:
        printf("%d",n);
        break;

    }
    printf("\n");
    }//ends of loop.
    return 0;
}