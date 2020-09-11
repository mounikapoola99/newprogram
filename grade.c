#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100);
    {
        printf("The grade is A");
    }
    else if(marks>=70 && marks<=84)
    {
        printf("The grade is B");
    }
    else if(marks>=55 && marks<=69)
    {
        printf("The grade is C");
    }
    else if(marks>=40 && marks<=54)
    {
        printf("The grade is D);
    }
    else if(marks<40)
    {
        printf("The grade is F);
    }
    else
    {
        printf("no grade");
    }
}    
