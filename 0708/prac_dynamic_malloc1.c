#include <stdio.h>

#pragma warning (disable: 4996)

int* change() {
  int arr[3];
  arr[0] = 100;
  arr[1] = 200;
  arr[2] = 300;
  return arr;
}

int main(void) {
  int* arr = change();
  printf("arr[0] : %d\n", arr[0]);
  printf("arr[1] : %d\n", arr[1]);
  printf("arr[2] : %d\n", arr[2]);
  return 0;
}