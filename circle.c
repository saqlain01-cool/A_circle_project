#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area,circumference;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    area = PI *radius*radius;
    printf("Area of circle: %0.3f \n",area);
    circumference= 2*PI*radius;
    printf("circumference of circle: %0.3f \n",circumference);
    return 0;
}
