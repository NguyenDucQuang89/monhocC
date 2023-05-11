#include <stdio.h>

int main()
{
    float doC, doF ;
    printf(" gia tri doC=");
    scanf("%f",&doC);
    
    doF = doC * 9/5 + 32;
    
    printf("doF = %f\n",doF);
    
    
    return 0;
}