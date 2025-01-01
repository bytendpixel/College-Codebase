#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum;
    sum = 2*(n+1);
    printf("Sum of the series is: %d\n",sum);
     
    return 0;
}

/* 2+4+6+8+...+2n=n(n+1) */