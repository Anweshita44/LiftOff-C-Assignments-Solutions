#include<stdio.h>
int main()
{
    int physics,chemistry,maths,biology,computer;
    float A,B;
    printf("enter your marks in physics :" );
    scanf("%d", &physics);
    
    printf("enter your marks in chemistry :");
    scanf("%d", &chemistry);
    
    printf("enter your marks in maths : ");
    scanf("%d", &maths);
    
    printf("enter your marks in biology : ");
    scanf("%d", &biology);
    
    printf("enter your marks in computer : ");
    scanf("%d", &computer);
    
    A=physics+chemistry+maths+biology+computer;
    printf("total marks scored : %f \n", A);
    
    B=A/500*100;
    printf("percentage secured %f", B);
    
    if(B>=90){
        printf("your grade is A");
    }
    else if(B>=80&&B<=89){
        printf("your grade is B");
    }
    else if(B>=70&&B<=79){
        printf("your grade is C");
    }
    else if(B>=60&&B<=69){
        printf("your grade is D");
    }
    else if(B>=40&&B<=59){
        printf("your grade is E");
    }
    else if(B<40){
        printf("your grade is F");
    }
    
   
    
    
    return 0;
    
    
    
}   