#include <stdio.h>

int main() {
    int array[10];
    int i, max_num;

    for (i = 1; i <= 10; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }

    max_num = array[0];
    for (i = 1; i <= 10; i++) 
    {
        if (array[i] > max_num) 
        {
            max_num = array[i];
        }
    }

    printf("The maximum number is: %d\n", max_num);

    return 0;
}

