   #include "main.h"
   /**
   *_puts - prints a string
   *@str : A pointer to an int that will updated
   *
   *Return: void which means our answer is cirrect
   */
   void _puts(char *str)
   {
  char *c;
  int m;
  c=str;
  for (m =0; c[0]; m++)
  {
  _putchar (c[m]);
  }
  _putchar('\n');
  }

