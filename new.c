#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    
if (num%2==0) 
{
    printf(" Even number %d",num);
}
else
printf("odd number %d",num);
}