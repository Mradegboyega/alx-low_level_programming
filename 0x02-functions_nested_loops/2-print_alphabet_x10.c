#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 */

void print_alphabet(void) {
  char ch;

  for (ch = 'a'; ch <= 'z'; ch++) {
    putchar(ch);
  }

  putchar('\n');
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void) {
  int i;

  for (i = 0; i < 10; i++) {
    print_alphabet();
  }
}

