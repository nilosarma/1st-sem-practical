/*Write a program to compute the sum of the first n terms of the following series
S=1+1/2+1/3+1/4+...... */
#include<stdio.h>
void main()
{
    int n=0;
    float i=1,sum=0;
    printf("Enter nth term :: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=(1/i);
        printf("\ni=%f",sum);
    }
    printf("sum :: %d",sum);

}