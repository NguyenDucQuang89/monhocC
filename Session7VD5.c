#include <stdio.h>
main()
{
    int x;
    x = 0;
    
    printf(" Enter choice ( 1 - 3) :");
    scanf("%d", &x);
    
    if ( x == 1)
        printf("\n/Choice is 1");
    else if ( x == 2)
        printf("\nChoice is 2");
    else if ( x == 3)
        printf("\nchoice is 3");
    else
        printf("\nInvalid Choice");
}