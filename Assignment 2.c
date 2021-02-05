#include<stdio.h>
int main()
{
    float c,f;
    printf("enter your temprature in celcius : ");
    scanf("%f", &c);
    
    f=(c*9/5)+32;
    printf("your temprature in farenheit is : %f", f);
    
    return 0;
}