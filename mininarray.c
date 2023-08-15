#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("enter the size of array\n");
    scanf("%d", &size);

    int array[size];

    printf("enter the values in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("the minimum value in array is %d\n", min);
    return 0;
}
