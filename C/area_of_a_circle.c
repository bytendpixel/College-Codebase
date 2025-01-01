#include<stdio.h>
int main()

// Area of a circle

{
    float radius;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    float area = 3.14*radius*radius;
    printf("The area of a circle is : %f", area);
    return 0;
}