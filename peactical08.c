/*Write a program to compute the sum of the first n term of the following series
                S=1-2+3-4+5......*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    for (int i = 1, x = 1; i <= n; i++)
    {
        sum += i * x;
        x *= -1;
    }
    printf("The number of 1-2+3-4....till end %d\n", n, sum);
    return 0;
}