#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int star = 5; star > i; star--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
