#include <stdio.h>

int main() {
  int total = 0;
  int limit;

  scanf("%u", &limit);

  for (int i = 0; i <= limit; i++) {
    total += i;
  }
  printf("%u", total);

  return 0;
}