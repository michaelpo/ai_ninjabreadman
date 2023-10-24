

#include<string.h>
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const* const argv []){

  int i; int count = 0;
  char c;

  for (i = 1; i < argc; i ++) {
    FILE * input = fopen(argv[i], "r");
    if (input == NULL) {
      printf("cant open %s\n", argv[i]); 
      return 1;
    }

    while(fscanf(input, "%c", &c) != EOF) {
      printf("wah");
      count += 1;
    }
    fclose(input);
  }

  fprintf(stdout, "Read %d characters \n", count);
  return 0;
}


