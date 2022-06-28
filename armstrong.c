#include <stdio.h>
#include <math.h>
// #include <cs50.h>

int main(void)

{

    for (int i = 0; i < 10; i++)
    {
        int z = i * i * i;

        if (z == i)
        {
            printf("%i\n", i);
        }
    }

    for (int i = 10; i < 100; i++)
    {
        int z = i * i * i;
        int unit_digit = i % 10;
        int tenth_digit = (i - i % 10) / 10;

        // printf("%i\n", unit_digit);
        // printf("%i\n", tenth_digit);

        if (z == unit_digit * unit_digit * unit_digit + tenth_digit * tenth_digit * tenth_digit)
        {
            printf("%i\n", i);
        }
    }

    for (int i = 100; i < 1001; i++)
    {
        int z = i;
        int unit_digit = i % 10;
        int tenth_digit = (i % 100 - i % 10) / 10;
        int hundredth_digit = (i % 1000 - i % 100) / 100;

        if (z == unit_digit * unit_digit * unit_digit + tenth_digit * tenth_digit * tenth_digit + hundredth_digit * hundredth_digit * hundredth_digit)
        {
            printf("%i\n", i);
        }
    }
}