#include "trains.h"
#include <Windows.h>
#include <stdio.h>

void delay (unsigned int value) {
  unsigned int count1 = 0;
  unsigned int count2 = 0;

  for (count1 = 0; count1 < value; count1++) {
    for (count2 = 0; count2 < count1; count2++) {

    }
  }
}

typedef struct
{
  int CJ;
} Train;

int main() {
  Train tr;
  tr.CJ = 11;
  int i;
  int j;

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    printf("columns: %d\n", columns);
    printf("rows: %d\n", rows);

  char rocket[200] = "        ^\n"
                 "       /^\\\n"
                 "       | |\n"
                 "       | |\n"
                 "       |A|\n"
                 "       |N|\n"
                 "       |N|\n"
                 "       |A|\n"
                 "      /| |\\\n"
                 "     / | | \\\n"
                 "    |  | |  |\n"
                 "     `_~~~_`\n";

  for (i = 0; i < 30; i++) {
    printf("\n");
  }

  printf("%s", rocket );  

  for (j = 0; j < rows; j++) {
    delay(6000);
    printf("\n");
  }
  return 0;
}/**1616 1611 1116*/