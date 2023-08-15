#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int array[size];

    printf("enter the %d values in array\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int max;

    array[0] = max;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d is largest in the array\n", max);
    return 0;
}
