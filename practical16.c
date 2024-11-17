#include<stdio.h>
int main()
{
    int A[10];
    for (int i = 0; i<10; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", A + i);

    }
    printf("The elements of the array are: ");
    for(int i = 0; i< 10; i++)
    printf("%d",A[i]);
    printf("\n");
    return 0;
}