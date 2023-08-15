#include <stdio.h>
int main(int argc, char const *argv[])
{
    int max_num, num;
    printf("how much number do you want to add to array\n");
    scanf("%d", &num);
    int array[num];

    for (int i = 0; i < num; i++)
    {
        printf("enter the number in position %d\n", i);
        scanf("%d", &array[i]);
    }
    
    array[0] = max_num;

    for (int i = 0; i < num; i++)
    {
        if (array[i]>max_num)
        {
            max_num = array[i];
        }
    }
    printf("max in array is %d", max_num);
    
    return 0;
}
