#include<unistd.h>
#include<stdio.h>
/**
 *  _putchar - short describtion
 *  @c: Description of parameter x
 *  Return: 1 (Success)
 */
int _putchar(char c, FILE *fp)
{
        return (write(fp, &c, 1));
}
