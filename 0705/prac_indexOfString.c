#include <stdio.h>

int get_index_of(char* str, char* c) {
  for ( int i = 0; str[i] != '\0'; i++ ) {
    if ( str[i] == c[0] ) {
      return i;
    }
  }
  return -1;
}

int main(void) {
    int index;
    index = get_index_of("abcd", "b"); // 1
    printf("index : %d\n", index);
    index = get_index_of("abcd", "bc"); // 1
    printf("index : %d\n", index);
    index = get_index_of("abcd", "bcd"); // 1
    printf("index : %d\n", index);
    index = get_index_of("abcd", "bd"); // -1
    printf("index : %d\n", index);
    index = get_index_of("abcd", "abcd"); // 0
    printf("index : %d\n", index);
    index = get_index_of("abcd", "d"); // 3
    printf("index : %d\n", index);

    return 0;
}