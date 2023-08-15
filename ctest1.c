#include <stdio.h>
int main(int argc, char const *argv[])
{
    int test[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of %d place in an array", i);
        scanf("%d", &test[5]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (test[0] > test[i])
        {
            printf("%d is greater", test[0]);
        }
        else
        {
            printf("%d is greater", test[i]);
        }
    }

    return 0;
}

