#include <stdio.h>
// simple ui
int main() {
  char input[50];
  printf("$ ");
  fgets(input, 50, stdin);
  printf("%s", input);
  return 0;
}

