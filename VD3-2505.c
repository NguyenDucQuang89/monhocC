#include <stdio.h>

void main()
{
    int ary[5];
    int i, max, min, total=0;
    float avg;
    for(i=0; i<5; i++)
    {
       printf(" enter num%d", i+1);
       scanf("%d", &ary[i]);
       total += ary[i];
    
    avg = (float)total/5;
        if( i == 0)
        { 
            max = ary[0];
            min = ary[0];
        }   
        
        else
    {
        if ( ary[i] > max)
        max = ary[i];
        if (ary[i]< min)
        min = ary[i];
    }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("total = %d\n", total);
    printf("avg = %f\n", avg);
    
}
