#include <stdio.h>

typedef enum {
  false,
  true
} BOOL;

unsigned int *sort(unsigned int input[10]) {

  unsigned int output[10];

  for (int i = 0; i < 10; i++) {
    output[i] = input[i];
  }

  BOOL swap_made = true;

  while (swap_made == true) {

    swap_made = false;

    for (int i = 0; i < 10; i++) {
      if (input[i] > input[i + 1]) {
        int temp = input[i];
        input[i] = input[i + 1];
        input[i + 1] = temp;
        swap_made = true;
      }
    }
  }

  return input;
}

int main() {

  unsigned int numbers[10];

  for (int i = 0; i < 10; i++) {
    scanf("%u", &numbers[i]);
  }

  unsigned int *numbers_pointer = sort(numbers);

  for (int i = 0; i < 10; i++) {
    numbers[i] = numbers_pointer[i];
  }

  for (int i = 0; i < 10; i++) {
    printf("%u", numbers[i]);
    printf(" ");
  }

  printf("\n");

  return 0;

}