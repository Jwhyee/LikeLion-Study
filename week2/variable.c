// 문제 : 변수 a와 b의 값을 교체해주세요.
// 조건 : 출력예시대로 나와야 합니다.

#include <stdio.h>

#pragma warning (disable: 4996)

int main(void) {

  int a = 20;

  int b = 40;

  // 수정가능지역 시작

  a += 20;
  b -= 20;
  
  // 수정가능지역 끝

  printf("== 문제시작 ==\n");

  printf("a : %d\n", a);
  // 출력 => a : 40
  printf("b : %d\n", b);
  // 출력 => b : 20

  return 0;
}