#include <stdio.h>
float volume(float, float);
float csa(float, float);
float tsa(float, float);
int main(int argc, char const *argv[])
{
    float radius, height;
    int operation;
    float pi = 3.14;
    float result;

    printf("enter the radius of your cylinder :\t");
    scanf("%f", &radius);

    printf("enter the height of your cylinder :\t");
    scanf("%f", &height);

    printf("Type 1 to get the volume\nType 2 to get the curved surface area of cylinder\nType 3 to get total surface area of cylinder\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        result = volume(radius, height);
        break;

    case 2:
        result = csa(radius, height);
        break;

    case 3:
        result = tsa(radius, height);
        break;

    default:
        printf("Provided operation is invalid");
        break;
    }
    return 0;
}

float pi = 3.14;

float volume(float radius, float height)
{
    float formula = pi * radius * radius * height;
    printf("%f * %f * %f * %f = %f", pi, radius, radius, height, formula);
}

float csa(float radius, float height)
{
    float formula = 2 * pi * radius * height;
    printf("2 * %f * %f * %f = %f", pi, radius, height, formula);
}

float tsa(float radius, float height)
{
    float formula = 2 * pi * radius * (radius + height);
    printf("2 * %f * %f (%f + %f) = %f", pi, radius, radius, height, formula);
}
