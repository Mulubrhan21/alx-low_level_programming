#include <unistd.h>
/**
*@c: the character to print
*
*return : on success 1.
*on error, -1 is returned and error is three rweturened
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
