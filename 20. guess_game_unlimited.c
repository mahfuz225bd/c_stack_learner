#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int lucky_number, choosen_number;
  
  // Set seed for rand()
  time_t t;
  srand((unsigned) time(&t));

  // Set random lucky number between 1 to 10
  lucky_number = rand() % 10 + 1;

  // Get choosen_number from user input while not matched (unlimited time)
  while (1) {
    printf("Guess a Number from 1 to 10: ");
    scanf("%d", &choosen_number);

    if (choosen_number == lucky_number) {
      printf("Congratulation! You have choose the correct answer.\n");
      break;
    }
  }
  
  return 0;
}