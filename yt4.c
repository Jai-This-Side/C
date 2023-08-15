#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, result; // n represents a no. which will be provided by user
    printf("Enter a no.\n");
    scanf("%d", &n);

    result = n*n*n;

    printf("cube of the provided no. is %d", result);


    return 0;
}

