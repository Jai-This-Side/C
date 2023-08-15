#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,perimeter;      // a,b,c represents three sides of triangle

    printf("Enter side one of triangle\n");
    scanf("%d", &a);

    printf("Enter second side of triangle\n");
    scanf("%d", &b);

    printf("Enter third side of triangle\n");
    scanf("%d", &c);

    perimeter = a+b+c; // perimeter formula

    printf("Area of triangle is %d", perimeter);
    return 0;
}
