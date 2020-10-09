#include "waterGame.h"
#include <Windows.h>

int main() {
  char* userInput;
  int tru = 7;

  int numberOfSteps;
  /** doto @anna*/
  int lengthOfTrain = 42;
  int trainType = 0;

  /**gets the screen height and width*/
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  int columns, rows;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    char* input;
    /**int trainNumber;*/
    /*printf("file Name \n");*/
    scanf("%s",  input);
    
    
    printf("your input is: %s\n", input);

    if (strcmp(input, "sl") == 1) {
      printf("You like cheese too!");
    } else {
      printf("I like cheese more.");
    }
    printf("\n\n\n");

return 0;
}