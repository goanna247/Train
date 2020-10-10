#include "waterGame.h"
#include <Windows.h>

int main() {
  int i;
  int tru = 7;
  int Input;

  /**train variables*/
  int numberOfSteps;
  int lengthOfTrain = 0;
  int linesDown = 10;

  int trainType = 0;
  /** 0 is a big train 
   *  1 is a small train 
   *  2 is a small red train 
   *  3 is a small magenta train 
   *  4 is a small green train
   *  5 is a small blue train
   *  6 is a small cyan train*/

  /**gets the screen height and width*/
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  int columns;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

  while (tru = 7 ) {
    printf("please enter a value between 0 - 6\n");
    scanf("%d", &Input); 
    if (Input <= 6 && Input >= 0) {
      trainType = Input;
      if (trainType == 0) {
        /**length of the biggest train*/
        lengthOfTrain = 42;
      } else if (trainType == 1 || trainType == 2 || trainType == 3 || trainType == 4 || trainType == 5 || trainType == 6) {
        /**length of the smaller train*/
        lengthOfTrain = 20;
      }
      system("cls");
      /**prints the train going across the screen*/
      for (i = 0; i < linesDown; i++) {printf("\n");}
      for (numberOfSteps = columns; numberOfSteps > lengthOfTrain; numberOfSteps--) {
        printTrain((numberOfSteps - lengthOfTrain),trainType);
        system("cls");
        for (i = 0; i < linesDown; i++) {printf("\n");}
      }
    } else {
      system("cls");
    }
  }
  return 0;
}