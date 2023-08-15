#include <stdio.h>
int main(int argc, char const *argv[])
{
   int m;
   printf("enter the limit of row and column\t");
   scanf("%d", &m);
   
   for (int row = 0; row < m; row++)
   {
    for (int column = 0; column <=row ; column++) {

        printf("*");
    }
    printf("\n");
   }
    return 0;
}

