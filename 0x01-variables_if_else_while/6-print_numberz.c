#include <stdio.h>

int main() 
{
  int i;
  char ch;

  for (i = 0; i <= 9; i++) {
    ch = i + '0';
    putchar(ch);
  }

  putchar('\n');

  return 0;
}

