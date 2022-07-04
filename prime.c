// Find the first 200 primes
#include <stdio.h>

int main(void)

{
    int n;
    int count = 2;
    int i = 5;
    int test = 0;
    printf("please number of primes that you want: ");
    scanf("%d", &n);
    // printf("2\n");
    // printf("3\n");
    int prime[n];
    prime[0] = 2;
    prime[1] = 3;

    while (count < n)
    {
        // set the test to true which will become false {0} only when the number is divisible by any of the previous primes.
        test = 1;

        // check whether the i is a prime or not.

        // more expensive program with all the numbers checked against the i.
        // for (int k = 2; k < i; k++)
        // {
        //     if (i % k == 0)
        //     {
        //         test = 0;
        //         break;
        //     }
        // }

        // less expensive program with only the previously found primes checked against i for divisibility. ALso no primes above the half of the value of I will be checked.
        for (int k = 0; k < count; k++)
        {
            if (prime[k] > i / 2.0)
            {
                break;
            }

            if (i % prime[k] == 0)
            {
                test = 0;
                break;
            }
        }

        if (test == 1)
        {
            prime[count] = i;
            count++;
        }

        // increase the count everytime you put in the prime number in the array.

        i = i + 2;
    }

    // print the entire array at once.
    for (int i = 0; i < count; i++)
    {
        printf("%i\n", prime[i]);
    }
}
