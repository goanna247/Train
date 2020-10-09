#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>


void delay (unsigned int value) {
  unsigned int count1 = 0;
  unsigned int count2 = 0;

  for (count1 = 0; count1 < value; count1++) {
    for (count2 = 0; count2 < count1; count2++) {}
  }
}

void printTrain(int spaces) {
  int i;
  char trainL1[100] = "***\n";
  char trainL2[100] = "***\n";

  for (i = 0; i < spaces; i++) {
    printf(" ");

  }
  printf("%s", trainL1);
  for (i = 0; i < spaces; i++) {
    printf(" ");

  }
  printf("%s", trainL2);
}

int main() {
  int hello;

  /**gets the screen height and width*/
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  int columns, rows;

  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

  /**system("cls");*/

  printf("columns: %d\n", columns);
 /** printf("rows: %d\n", rows);

  char boxL1[100] = " ***\n";
  char boxL2[100] = " ***\n";


  delay(20000);
  system("cls");

  delay(20000000);*/
  system("cls");  
  for (hello = columns; hello > 0; hello--) {
    printTrain(hello - 4);
    system("cls");
  }




}