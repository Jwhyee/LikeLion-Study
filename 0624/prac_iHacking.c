// 문제 : 변수 i의 값을 해킹해주세요.
// 조건 : i의 값을 직접 바꾸는 것은 안됩니다.
// 조건 : `i = 50;` 은 안됩니다.

#include <stdio.h>

// 8바이트
int main(void) {
  int i = 30;
  int i2 = 30;

  // 수정가능지역 시작
  printf("%ld\n", (long)&i);
  printf("%ld\n", (long)&i2);
  int* p = &i;
  *&i = 50;
  
  // 수정가능지역 끝

  printf("i : %d\n", i);
  // 출력 => i : 50
  printf("p : %d\n", p);

  return 0;
}