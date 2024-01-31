#include <stdio.h>

int main(void)
{
    float integration = 4.0f/3.0f;
    float radius = 10.0f * 10.0f * 10.0f;
    float pie = 3.14158f;

    
    printf("The radius of the sphere is: %.2f", integration * radius * pie );

    return 0;
}