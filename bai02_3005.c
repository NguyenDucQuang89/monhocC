#include <stdio.h>

void diem(int i)
{ 
        if ( i >= 90)
        { printf("%c", 'A');
        }
        else if( i>80 && i<89)
            { printf("%c", 'B'); }
        else if( i>70 && i<79)
            { printf("%c", 'C');}
        else if( i>60 && i<69)
            { printf("%c", 'D');}
        else
            printf("%c", 'F');
    
}
int main()
{
    int i;
    printf(" nhap gia tri i: ");
    scanf("%d", &i);
    printf(" ket qua sinh vien: ");
    diem(i);
    printf("\nket qua sinh vien: ");
    diem(85);
    return 0;
}