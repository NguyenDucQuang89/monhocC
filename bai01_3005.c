#include <stdio.h>

int chuvi(int a, int b)
{ 
    int cv = 0;
    cv = ( a + b) * 2;
    printf("%d\n", cv);
    return cv;
}
int dientich(int a, int b)
{   
    int dt = 0;
    dt = a * b;
    printf("%d\n", dt);
    return dt;
}
int main()
{
   int a, b;
   printf(" nhap gia tri a: ");
   scanf("%d", &a);
   printf("nhap gia tri b: ");
   scanf("%d", &b);
   int d = dientich(a,b);
   int c = chuvi(a,b);
   return 0;
}
