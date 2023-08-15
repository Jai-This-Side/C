#include <stdio.h>
int main(int argc, char const *argv[])
{
    int side, area;

    printf("Enter a side of a square\n");
    scanf("%d", &side);

    area = side*side;

    printf("Area of square is %d", area);

    return 0;
}
