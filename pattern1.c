#include <stdio.h>

int main(int argc, char const *argv[])
{

    int row, column;

    printf("enter the number of rows\t");
    scanf("%d", &row);

    printf("enter the number of column\t");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int m = 0; m < column; m++)
        
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}