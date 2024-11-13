/*2.Write a program to take input of two numbers and print their sum, product, difference.*/
#include <stdio.h>
int main()
{
    int n1, n2, sum, diff, prod;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    // process
    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    // Display the output
    printf("\nSUM: %d", sum);
    printf("\nDIFFERENCE: %d", diff);
    printf("\nPRODUCT: %d", prod);
}