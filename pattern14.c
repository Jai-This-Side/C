#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i = 0; i < 5; i++)
    {
        for(int space = 4; space>i; space--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j+1);
        }
        // for (size_t i = 0; i < count; i++)
        // {
        //     /* code */
        // }
    }

    return 0;
}




