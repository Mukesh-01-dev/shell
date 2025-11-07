#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);
  char* command;

  printf("$ ");

  scanf("%s\n", command);
  printf("%s: command not found");
  return 0;
}
