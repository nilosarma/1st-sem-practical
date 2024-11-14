/*Write a function that checks wheater a given string is pelindrome or not.Use this function to find wheather the string entered by user is pelindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("\n Enter the string to check for palindrome: ");
    gets(str1);
    strcpy(str2,str1);//copy str1 to str2
    strrev(str2);//reverse of str2
    if(strcmp(str1,str2)==0)
    printf("String is palindrome...");
    else
    printf("String is not palindrome...");
    return 0;


}