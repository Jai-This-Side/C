#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the limit for your pattern");
    scanf("%d", &num);

    for (int row = 0; row <= num; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d", column);
        }
        printf("\n");
          
    }
    
    return 0;
}
