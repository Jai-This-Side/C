#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[10];
    int i, min_num;
    
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a no.\t");
        scanf("%d", &numbers[i]);
    }

    min_num = numbers[0];

    for (int i = 1; i <= 10; i++)
    {
        if (numbers[i] < min_num)
        {
            min_num=numbers[i];
        }
    }
printf("The minimum number is: %d", min_num);

    return 0;
}
