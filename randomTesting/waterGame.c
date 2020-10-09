#include "waterGame.h"
#include <Windows.h>

int main() {
  /**random variables*/
  int numberOfSteps;
  int i;
  int tru = 7;
  int lengthOfTrain = 0;
  int trainType = 99;

  /**gets the screen height and width*/
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  int columns, rows;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

  /**while loop means that you can run the train lots of times,
   *also if you get the command wrong because i know you 
   *cant type on my keyboard*/
  char input[10];
  printf("%d",lengthOfTrain);
  while(tru == 7) {
    fgets(input,10, stdin);
    system("cls");
    if (strcmp(input, "sl-b") == 1) {
      trainType = 0;
      lengthOfTrain = 42;
    } else if (strcmp(input, "sl-s") == 1) {
      trainType = 1;
      lengthOfTrain = 21;
    } else if (strcmp(input, "sl") == 1) {
      trainType = 1;
      lengthOfTrain = 21;
    } else {
      trainType = 99;
      lengthOfTrain = 0;
    }

    if (trainType == 0|| trainType == 1) {
      printf("%d", trainType);
      /**system("cls");*/
      /**makes the train spawn 20 lines down because who wants a train at the top of the cmd*/
      for (i = 0; i < 10; i++) {printf("\n");}
      for (numberOfSteps = columns; numberOfSteps > lengthOfTrain; numberOfSteps--) {
        printTrain((numberOfSteps - lengthOfTrain),trainType);
        system("cls");
        for (i = 0; i < 10; i++) {printf("\n");}
      }
    } else if (trainType == 99) {
      system("cls");
    } else {
      system("cls");
    }
  }
  return 0;
}