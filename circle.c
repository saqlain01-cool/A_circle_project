#include<stdio.h>
#define pi 3.14
int main()
{
    int radius;
    float area;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    area = pi *radius*radius;
    printf("Area of circle: %0.3f \n",area);
    return 0;
}
