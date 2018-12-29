#include <stdio.h>

/* Prototypes */
char *hello(){
  printf("hello")
};
char *world(){
  printf("world")
};

int
main(int argc, char **argv)
{
  printf("%s, %s!\n", hello(), world());
  return 0;
}
