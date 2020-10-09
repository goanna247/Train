#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  printf("hello\n");

   
  int TestInt;
  printf("enter an integer: ");
  scanf("%d", &TestInt);
  printf("Number = %d", TestInt, "\n");

  if (TestInt == 0) {
    printf("yay");
  } else {
    printf("nay");
  }

  return 0;
}