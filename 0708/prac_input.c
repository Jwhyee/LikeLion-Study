#include <stdio.h>
// malloc을 사용하지 않고 사용해보세요!
// 이 코드는 만들 수 없는 코드이다.
int main(void) {
  int count;
  printf("개수 : ");
  scanf("%d", &count);

  int arr[1000];

  printf("숫자 %d개를 띄워쓰기 하여 입력해주세요.\n", count);
  printf("입력 : ");
  
  for ( int i = 0; i < count; i++ ) {
    scanf("%d", arr + i);
  }

  printf("결과 : ");
  for ( int i = 0; i < count; i++ ) {
    printf("%d ", *arr + i);
  }
  
  return 0;
}