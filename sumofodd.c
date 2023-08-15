
#include <stdio.h>

int main() 
{
    int sum = 0, num, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i += 2) 
    {
        printf("%d\n", i);
        sum += i;  
    }
    printf("Sum of odd natural numbers up to %d terms: %d\n", num, sum);
    return 0;
}

