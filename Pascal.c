#include <stdio.h>
#include <math.h>
#include <cs50.h>

int factorial(int size);

int main(void)

{
    int size = 0;
    int x = 1;
    int y = 1;
    int sum = 0;

    printf("please enter the size of the Pascal's triangle: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= size - i - 2; j++)
            printf("  ");
        for (int k = 0; k <= i; k++)
            printf("%d  ", factorial(i)/(factorial(k)*factorial(i-k)));

        printf("\n");
    }
}

int factorial(int size)
{
    int result = 1;

    for (int i = 1; i <= size; i++)
        result = result * i;
    

    return result;
}