#include <stdio.h>
int main() {
  printf("Arch : x64\n\n");
  printf("%d\n\n", EOF);  // output : -1

  printf("%d\n", sizeof(int));          // output : 4
  printf("%d\n", sizeof(long));         // output : 4
  printf("%d\n\n", sizeof(long long));  // output : 8

  printf("%d\n", sizeof(float));   // output : 4
  printf("%d\n", sizeof(double));  // output : 8

  return 0;
}