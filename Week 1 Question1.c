#include<stdio.h>
int main()
{
    int a,b;
    int sum, diff , product;
    float division;
    printf("enter your 1st number : ");
    scanf("%d", &a);
    
    printf("enter your 2nd number : ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("sum of the number is : %d + %d = %d \n", a , b , sum);
    
    diff = a-b;
    printf("difference of the number is : %d - %d = %d \n", a,b,diff);
    
    division = (float)a/b;
    printf("division of the number : %d / %d = %f \n",a,b,division);
    
    product = a*b;
    printf("product of two numbers : %d * %d = %d \n",a,b,product);
    
    return 0;
}
