#include <unistd.h>
   /*
      *_putchar -writes character c to stdout
      *return 0n success -1
      */
   int _putchar(char c)
   {
           return(write(1, &c, 1));
   }
