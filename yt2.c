#include <stdio.h>
int main(int argc, char const *argv[])
{
    int radius;
    float area;
    float pi = 3.14;

    printf("enter the radius of circle\n");
    scanf("%d", &radius);

    area = pi*radius*radius;

    printf("Area of circle is %f", area);

    return 0;
}
