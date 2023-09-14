#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int large;

        a = 972;
        b = -98;
        c = 0;

        large = largest_number(a, b, c);

        printf("%d is the largest number\n", large);

        return (0);
}
