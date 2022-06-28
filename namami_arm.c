#include <stdio.h>
#include <math.h>
// #include <cs50.h>

int main(void)

{

    int y = 0;
    int n = 0;
    int j = 0;

    for (int i = 1; i < 100000; i++)
    {

        y = 0;
        j = n;
        // printf("%i\n", j);
        while (j > 0)
        {
            int o = j % 10;
            j = j / 10;
            int x = o * o * o*o;
            y = y + x;
            // printf ("%i\n",i);
            // printf ("%i\n",o);
            // printf ("%i\n",x);
        }
        if (y == n)
        {
            printf("%i\n", n);
        }

        // printf("%i\n", j);
        n++;
    }
}