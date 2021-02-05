#include<stdio.h>
int main()
{
    float r,D,C,A;
    printf("enter the radius of the circle : ");
    scanf("%f", &r);
    
    D=r*2;
    printf("diameter of the circle is : %f\n", D);
    
    C=2*22.7*r;
    printf("circumference of the circle is : %f\n", C);
    
    A=22.7*r*r;
    printf("area of the circle is : %f\n", A);
    
    return 0;
}