#include <stdio.h>

int main ()
{
    int top, bottom, height ;
    printf(" nhap gia tri top = ");
    scanf("%d", &top);
    printf(" nhap gia tri bottom = ");
    scanf("%d", &bottom);
    printf(" nhap gia tri height = ");
    scanf("%d", &height);
    printf(" dien tich = %d", (top + bottom) * height/2);
    
    return 0;
    
}