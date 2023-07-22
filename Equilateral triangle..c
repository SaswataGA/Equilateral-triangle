#include<stdio.h>
int main()
{
    float a,area;
    printf("The length of arm (meter):");
    scanf("%f",&a);
    area= (pow(a,2)*sqrt(3))/4;
    printf("Area of the Equilateral triangle = %.2f sq-meter",area);
}
