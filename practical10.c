/*Write a function to find wheather a given no. is prime or not.Use the same to generate the prime numbers less than 100*/
#include <stdio.h>
int checkprime(int n)
{
    int count = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return (count == 2);
}

int main()
{
    printf("Prime numbers smaller than 100 are: ");
    for (int i = 1; i < 100; i++)
        if (checkprime(i))
            printf("%d", i);
    return 0;
}