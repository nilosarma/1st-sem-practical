/*Write a program to find the smallest or greatest of three numbersgiven as input.*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers");
    scanf("%d%d%d", &num1, &num2, &num3);
    // Largest
    if (num1 > num2 && num1 > num3)
        printf("%d is greates", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is greates", num2);
    else
        printf("%d is greatest", num3);
    // Smallest
    if (num1 < num2 && num2 < num3)
        printf("%d is smallest", num1);
    else if (num2 < num1 && num2 < num3)
        printf("%d is smallest", num2);
    else
        printf("%d is smallest", num3);
    return 0;
}