#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count = 0;
    printf("enter num :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {        
        printf("%d %% %d \n", num, i);
        count++;
if (count>2)
{
    break;
}
        }
        
    }
    if (count>2)
    {
        printf("not a prime no.");
    }
    else {
        printf("prime no.");
    }

    
    
    
    return 0;
}

