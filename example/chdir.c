#include "common.h"

int main(int argc, char const *argv[]) {
  unsigned int i;

  char *dirs[] = {"/", "/tmp"};

  for (i = 0;; i++) {
    if (i % 1000 == 0) {
      printf("iteration %u...\n", i);
    }

    if (chdir(dirs[i % 2]) < 0) {
      perror("fault!");
      exit(errno);
    }
  }

  return 0;
}
