#include "waterGame.h"
#include <Windows.h>

int main() {
  int i;
  int tru = 7;

  int numberOfSteps;
  int lengthOfTrain = 0;
  int linesDown = 10;

  int trainType = 6;
  /** 0 is a big train 
   *  1 is a small train 
   *  2 is a small red train 
   *  3 is a small magenta train 
   *  4 is a small green train
   *  5 is a small blue train
   *  6 is a small cyan train*/

  if (trainType == 0) {
    lengthOfTrain = 42;
    /**length of the biggest train*/
  } else if (trainType == 1 || trainType == 2 || trainType == 3 || trainType == 4 || trainType == 5 || trainType == 6) {
    lengthOfTrain = 20;
    /**length of the smaller train*/
  }

  /**gets the screen height and width*/
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  int columns, rows;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

  system("cls");
  for (i = 0; i < linesDown; i++) {printf("\n");}
  for (numberOfSteps = columns; numberOfSteps > lengthOfTrain; numberOfSteps--) {
    printTrain((numberOfSteps - lengthOfTrain),trainType);
    system("cls");
    for (i = 0; i < linesDown; i++) {printf("\n");}
  }


  return 0;
}