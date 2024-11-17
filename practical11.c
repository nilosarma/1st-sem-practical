/*Write a program to compute the factors of a given number.*/
#include<stdio.h>
int main()
{
    int num, count;
    printf("Enter a number to find factors\n");
    scanf("%d", &num);
    printf("Factors of %dare\n", num);
    for(count = 1;count <= num;count++)
    {
        if(num % count ==0)
        printf("%d\n", count);
    }
}
