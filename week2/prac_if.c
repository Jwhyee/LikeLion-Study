// 문제 : 나이에 따른 올바른 성년여부가 출력되어야 합니다.

#include <stdio.h>

int main(void) {
  int age = 19;

  if(age < 20){
    printf("미성년입니다.\n");
  }

  age = 40;

  if(age >= 20){
    printf("성년입니다.\n");
  }

  return 0;
}