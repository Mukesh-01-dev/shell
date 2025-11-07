#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  while (1) {
    setbuf(stdout, NULL);
    printf("$ ");

    char input[100];
    char exitSuccess[] = "exit 0";
		char exitError[] = "exit 1";
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';

    if (!strcmp(input, exitSuccess)) {
			return 0;
		} else if (!strcmp(input, exitError)) {
      return 1;
    }

    printf("%s: command not found\n", input);
  }
  return 0;
}