#include<stdio.h>
/*Write a program that takes the radius of a circle as input from from user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumferencefrom the main() function*/
void areaCircumferenceCircle(int r, float *area, float *circm)
{
    *area = 3.14 * r * r;
    *circm = 2 * 3.14 * r;
}

int main()
{
    int r;
    float area, circumference;
        printf("Enter the radius of the radius of the circle: ");
        scanf("%d", &r);
        areaCircumferenceCircle(r, &area, &circumference);
        printf("Area of the circle =%f\nCircumference of the circle =%f\n", area, circumference);
        return 0;
    }