
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


int main (int argc, char const* const argv [])  {

  int i; int count = 0;
  char c;
  for (i = 1; i < argc; i ++) {
    FILE * ifp = fopen(argv[i],"r");
    if(ifp==NULL) {
      printf("can't open %s\n", argv[i]);
      return 1;
    }
    while (fscanf(ifp, "%c", &c) != EOF) {
      count++;
    }
    fclose(ifp);
    fprintf(stdout, "Read %d characters \n", count);
    return 0;
  }
}


