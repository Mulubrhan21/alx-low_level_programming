#include "main.h"
   /*
      *_putchar -writes character c to stdout
      *return 0n success -1
      */
   int main(void)
{
	char mule[] ="_putchar";
	int c;
	for(c=0; c<8; c++)
	{
		_putchar(mule[c]);
	}
	_putchar('\n');
	return (0);
}
