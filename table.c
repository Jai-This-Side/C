#include <stdio.h>
int main(int argc, char const *argv[])
{
    int table, number , number2;
    printf("enter the limit upto which table will print\n");
    scanf("%d", &table);

    for(int i = 1; i <= table; i++)
    {
        for (int y = 1; y <= 10; y++)
        {
            printf("%d x %d = %d\n", i, y, i*y);
        }
        
    }
    
    return 0;
}
