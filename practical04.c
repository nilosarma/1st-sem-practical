#include<stdio.h>
int main()
{
int N;
int sum, pro, dig;
printf("\n Enter an integer number:");
scanf("%d",&N);
/*calculating sum and product*/
sum=0;
pro=1;
while(N>0)
{
    dig=N%10;
    sum+=dig;
    pro*=dig;
    N=N/10;
}
printf("\nSUM of all digits is: %d",sum);
printf("\nPRODUCT of all digits: %d",pro);
return 0;
}