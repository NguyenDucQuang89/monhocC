#include <stdio.h>

int main()
{ 
    int num1, num2, sum = 0;
    printf(" enter two numbers: ");
    scanf(" %d %d", &num1, &num2);
    
    do {
        sum = num1 + num2;
        printf("sum: %d\n", sum);
        
        printf(" enter two numbers ( or enter 0 to exit): ");
        scanf(" %d %d", &num1, &num2);
    } while (num1 != 0 && num2 != 0);
    
    return 0;
    
    }
