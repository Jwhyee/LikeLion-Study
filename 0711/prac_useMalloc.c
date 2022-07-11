// 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용할 수 없습니다.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 7[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 4[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 100[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 2[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
*/

#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable: 4996)

#define true 1


int main(void) {
    int size;
    printf("사람의 숫자를 입력해주세요. : ");
    scanf("%d", &size);
    int* arr;
    arr = malloc(sizeof(int) * size);

  for (int i = 0; i < size; i++){
    printf("%d번째 사람의 나이를 입력해주세요 : ", i+1);
    scanf("%d", arr + i);
  }
    for (int i = 0; i < size; i++)
  {
    printf("%d번째 사람의 나이 : %d\n",i+1, arr[i]);
  }
  free(arr);
  return 0;
}