#include<stdio.h>
int main()

//Write a program to calculate perimeter of a rectangle.Take sides = a,b from the users

{
    float a,b;
    printf("Enter the length : ");
    scanf("%f",&a);
    printf("Enter the width : ");
    scanf("%f",&b);
    float perimeter = 2*(a+b);
    printf("The perimeter of a rectangle : %f", perimeter);
    return 0;
} 

//Take a number(n) from user & output its cube(n*n*n)

{
    float n;
    printf("Enter the value of n : ");
    scanf("%f", &n);
    float cube = n*n*n;
    printf("Cube= %f",cube);
}

