#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count = 0, evensum = 0, oddsum = 0, rem, temp;
    printf("enter a no. :");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("no. of digits this no. have : %d\n", count);

    while (temp != 0)
    {
        rem = temp % 10;
        if (rem % 2 != 0)
        {
            oddsum += rem;
        }

        else
        {

            evensum += rem;
        }
        temp = temp / 10;
    }

    printf("the sum of even digits in the no. is %d\n", oddsum);
    printf("the sum of odd digits in the no. is %d\n", evensum);

    int t2, t3;

    return 0;
}
