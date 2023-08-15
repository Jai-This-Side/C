#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the limit for this pattern");
    scanf("%d", &n);

    for (int row = 0; row <= n; row++)
    {
        for (int column = 1; column <= n-row+1; column++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
