#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)  

{
    int size=0;
    printf ("please enter the size of the right triangle: ");
    scanf("%d", &size);
    //loop with one # and one space charater as per the line.
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if ((size-j-1)<=i)
                printf ("#");
            else
                printf (" ");
        }
        printf ("\n");
    }
}