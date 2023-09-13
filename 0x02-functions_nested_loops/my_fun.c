#include<unistd.h>
/**
 *  _putchar - short describtion
 *  @c: Description of parameter x
 *  Return: 1 (Success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
