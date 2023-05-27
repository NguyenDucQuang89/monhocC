#include<stdio.h>

int main()
{
    float dayexpen[7] = {1200.5, 800.25, 950.75, 1100, 750.5, 900.119995, 1300.339966};
    float budget;
    scanf("%f", &budget);
    float total = dayexpen[0];
    float high = dayexpen[0];
    for( int i = 1; i<7; i++)
    {
        total += dayexpen[i];
        if( dayexpen[i] > high)
            high = dayexpen[i];
    }
    printf("Total monthly expenses: $%f\n", total);
        if( total <= budget)
            printf("\nExpenses are within the budget");
        else
            printf("\nExpenses exceed the budget");
    printf("\n Highest expense: $%f", high);
    return 0;
    
}