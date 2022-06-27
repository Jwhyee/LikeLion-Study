// 문제 : 원본값을 훼손하는 change 함수를 만들어주세요.

#include <stdio.h>

// 수정가능지역 시작
void change() {
  int num;
  printf("== change 함수 시작 ==\n");
  printf("&num : %ld\n", (long)&num);
  *(&num+7) = 50;
  printf("== change 함수 끝 ==\n");
}
// 수정가능지역 끝

int main(void) {
  int x = 20;

  printf("&x : %ld\n", (long)&x);
  printf("change 함수 호출하기 전의 x : %d\n", x);

  change();  

  printf("change 함수 호출한 후의 x : %d\n", x);
  // 출력 => change 함수 호출한 후의 x : 50

  return 0;
}