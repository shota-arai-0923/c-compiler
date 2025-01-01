#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "引数の個数が正しくありません\n");
    return 1;
  }

  printf(".text\n");
  printf(".global main\n");
  printf("main:\n");
  printf("  mov x0, #%d\n", atoi(argv[1])); // x0に引数の値をロード
  printf("  ret\n");
  return 0;
}
