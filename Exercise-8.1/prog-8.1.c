
#include <stdio.h>

int main()
{
  int i, j; // vertical and horizontal cell counter
  int MAX_COL = 49;
  int MAX_ROW = 33;

  for (j = 0; j < MAX_ROW; j++)
  {
    for (i = 0; i < MAX_COL; i++)
    {
      if (i % 6 == 0 && j % 4 == 0)
      {
        /** VERTICAL */
        putchar('+');
      }
      else if (i % 6 != 0 && j % 4 == 0)
        putchar('-');

      else if (i % 6 != 0 && j % 4 != 0)
        putchar(' ');
      else
        putchar('|');
    }
    putchar('\n');
  }

  return 0;
}

