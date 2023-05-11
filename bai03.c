#include <stdio.h>

 int main()
{
	float num1, num2;
    printf("nhap so num1=");
    scanf("%f",&num1);
	printf("nhap so num2=");
    scanf("%f",&num2);
	printf("tong = %.1f\n",num1 + num2);
	printf("hieu = %.1f\n",num1 - num2);
	printf("tich = %.1f\n", num1 * num2);
	printf("thuong = %.1f\n", num1/num2);
	
    return 0;
}