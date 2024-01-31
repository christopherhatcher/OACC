#include <stdio.h>

int main(void)
{
    float integration = 4.0f/3.0f;
    float radius;
    float pie = 3.14158f;

    printf("What is the radius of the sphere: ");
    scanf("%f", &radius);
    radius = radius * radius * radius;
    printf("The volume of the sphere is: %.2f", integration * radius * pie );

    return 0;
}