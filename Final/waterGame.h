#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int i;
  char* trainL0;
  char* trainL1;
  char* trainL2;
  char* trainL3;
  char* trainL4;
  char* trainL5;
  char* trainL6;
  char* trainL7;
} Train;

void printTrain(int spaces, int train) {
  Train t1;
  Train t2;
  Train t3;
  Train t4;
  Train t5;
  Train t6;
  Train t7;

  /**code 0*/
  t1.trainL0 = "        0    O    o   o    .  .    .\n";
  t1.trainL1 = "        __        __________\n";
  t1.trainL2 = "     /  \         ========   _____________\n";
  t1.trainL3 = "      ||          =      =  /           ]\n";
  t1.trainL4 = "    ___==============      = /            ]\n";
  t1.trainL5 = "  \_[            ========= [            ]\n";
  t1.trainL6 = "    [=====================^==============\n";
  t1.trainL7 = "___//_(_)_(_)_(_)___\__/_____(_)_(_)_(_)\n";

  /**code 1 - no colour*/
  t2.trainL0 = "       ____\n";
  t2.trainL1 = "  ][_n_|OO[ ====_\n";
  t2.trainL2 = " (_____|__|_[_____].\n";
  t2.trainL3 = "< oo    OO   o   o\n";
  
  /**code 2 - red*/
  t3.trainL0 = "\033[1;31m      ____\n";
  t3.trainL1 = "  ][_n_|OO[ ====_\n";
  t3.trainL2 = " (_____|__|_[_____].\n\033[0m";
  t3.trainL3 = "< oo    OO   o   o\n";

  /**code 3 - magenta*/
  t4.trainL0 = "\033[1;35m      ____\n";
  t4.trainL1 = "  ][_n_|OO[ ====_\n";
  t4.trainL2 = " (_____|__|_[_____].\n\033[0m";
  t4.trainL3 = "< oo    OO   o   o\n";

  /**code 4 - green */
  t5.trainL0 = "\033[1;32m      ____\n";
  t5.trainL1 = "  ][_n_|OO[ ====_\n";
  t5.trainL2 = " (_____|__|_[_____].\n\033[0m";
  t5.trainL3 = "< oo    OO   o   o\n";

  /**code 5 - blue*/
  t6.trainL0 = "\033[1;34m      ____\n";
  t6.trainL1 = "  ][_n_|OO[ ====_\n";
  t6.trainL2 = " (_____|__|_[_____].\n\033[0m";
  t6.trainL3 = "< oo    OO   o   o\n";

  /**code 6 - cyan*/
  t7.trainL0 = "\033[1;36m      ____\n";
  t7.trainL1 = "  ][_n_|OO[ ====_\n";
  t7.trainL2 = " (_____|__|_[_____].\n\033[0m";
  t7.trainL3 = "< oo    OO   o   o\n";

/**
 * 
 * big boi train
         0    O    o   o    .  .    .  
        __        __________
     /  \         ========   _____________
      ||          =      =  /           ]
  ___==============      = /            ]
  \_[            ========= [            ]
    [=====================^==============
___//_(_)_(_)_(_)___\__/_____(_)_(_)_(_)

       ____
  ][_n_|OO[ ====__
 (_____|__|_[_____].
< oo    OO   o   o
*/

if (train == 0) {
  for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL0);
  for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL1);
  for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL2);
    for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL3);
  for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL4);
    for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL5);
  for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  }
  printf("%s", t1.trainL6);
    for (t1.i = 0; t1.i < spaces; t1.i++) {
    printf(" ");
  } 
  printf("%s", t1.trainL7);


} else if (train == 1) {
  for (t2.i = 0; t2.i < spaces; t2.i++) {
    printf(" ");
  }
  printf("%s", t2.trainL0);
  for (t2.i = 0; t2.i < spaces; t2.i++) {
    printf(" ");
  }
  printf("%s", t2.trainL1);
  for (t2.i = 0; t2.i < spaces; t2.i++) {
    printf(" ");
  }
  printf("%s", t2.trainL2);
    for (t2.i = 0; t2.i < spaces; t2.i++) {
    printf(" ");
  }
  printf("%s", t2.trainL3);


} else if (train == 2) {
  for (t3.i = 0; t3.i < spaces; t3.i++) {
    printf(" ");
  }
  printf("%s", t3.trainL0);
  for (t3.i = 0; t3.i < spaces; t3.i++) {
    printf(" ");
  }
  printf("%s", t3.trainL1);
  for (t3.i = 0; t3.i < spaces; t3.i++) {
    printf(" ");
  }
  printf("%s", t3.trainL2);
    for (t3.i = 0; t3.i < spaces; t3.i++) {
    printf(" ");
  }
  printf("%s", t3.trainL3);


} else if (train == 3) {
  for (t4.i = 0; t4.i < spaces; t4.i++) {
    printf(" ");
  }
  printf("%s", t4.trainL0);
  for (t4.i = 0; t4.i < spaces; t4.i++) {
    printf(" ");
  }
  printf("%s", t4.trainL1);
  for (t4.i = 0; t4.i < spaces; t4.i++) {
    printf(" ");
  }
  printf("%s", t4.trainL2);
  for (t4.i = 0; t4.i < spaces; t4.i++) {
    printf(" ");
  }
  printf("%s", t4.trainL3);


} else if (train == 4 ) {
  for (t5.i = 0; t5.i < spaces; t5.i++) {
    printf(" ");
  }
  printf("%s", t5.trainL0);
  for (t5.i = 0; t5.i < spaces; t5.i++) {
    printf(" ");
  }
  printf("%s", t5.trainL1);
  for (t5.i = 0; t5.i < spaces; t5.i++) {
    printf(" ");
  }
  printf("%s", t5.trainL2);
  for (t5.i = 0; t5.i < spaces; t5.i++) {
    printf(" ");
  }
  printf("%s", t5.trainL3);

  
} else if (train == 5 ) {
  for (t6.i = 0; t6.i < spaces; t6.i++) {
    printf(" ");
  }
  printf("%s", t6.trainL0);
  for (t6.i = 0; t6.i < spaces; t6.i++) {
    printf(" ");
  }
  printf("%s", t6.trainL1);
  for (t6.i = 0; t6.i < spaces; t6.i++) {
    printf(" ");
  }
  printf("%s", t6.trainL2);
  for (t6.i = 0; t6.i < spaces; t6.i++) {
    printf(" ");
  }
  printf("%s", t6.trainL3);

  
} else if (train == 6) {
  for (t7.i = 0; t7.i < spaces; t7.i++) {
    printf(" ");
  }
  printf("%s", t7.trainL0);
  for (t7.i = 0; t7.i < spaces; t7.i++) {
    printf(" ");
  }
  printf("%s", t7.trainL1);
  for (t7.i = 0; t7.i < spaces; t7.i++) {
    printf(" ");
  }
  printf("%s", t7.trainL2);
  for (t7.i = 0; t7.i < spaces; t7.i++) {
    printf(" ");
  }
  printf("%s", t7.trainL3);

  
}
}