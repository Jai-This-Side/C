#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m;
    printf("enter the limit for the pattern\t");
    scanf("%d", &m);

    for (int i = 0; i <m; i++)
    {
        for (int j = m-i; j > 0; j--)
        {
            printf("%d", j);
        }

        printf("\n");
        
    }
    
    return 0;
}
