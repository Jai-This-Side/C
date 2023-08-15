#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the limit for your pattern");
    scanf("%d", &n);

    for (int row = 0; row < 2*n-1; row++)
    {
        int TotalStarsInaRow = row >= n ? 2*n-row : row;

            for (int column = 0; column <= TotalStarsInaRow; column++)
            {
                printf("*");
            }
            
         printf("\n");   
    }                                                 
    return 0;
}
