#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, reverse;
    printf("enter a no. of your choice :");
    scanf("%d", &num);

while (num>0)
{
    reverse=num%10;
    printf("%d", reverse);
    num=num/10;
    }

    return 0;
}
