#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX_INPUT 100
#define MAX_ARGS 10


void getInput(char *str, size_t size) {
	printf("$ ");
	fflush(stdout);
	if (fgets(str, size, stdin)) {
			size_t len = strlen(str);
			if (len > 0 && str[len-1] == '\n') {
					str[len-1] = '\0';
			}
	}
}

int checkExitCommand(const char *input) {
    if (strcmp(input, "exit 0") == 0) {
        return 0;
    }
    if (strcmp(input, "exit 1") == 0) {
        return 1;
    }
    return -1;
}

int main(int argc, char *argv[]) {
  char input[MAX_INPUT];

  while (1) {
    getInput(input, sizeof(input));

    int code = checkExitCommand(input);
    if (code != -1) {
      exit(code);
    }

    printf("%s: command not found\n", input);
  }
  return 0;
}