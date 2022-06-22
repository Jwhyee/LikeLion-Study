// 문제 : 입력받은 정수가 100보다 크고 200보다 작은지 알려주는 함수 구현

#include <stdio.h>
int is_bigger_than_100_and_less_than_200(int num){
    if(num > 100 && num < 200){
        return 1;
    }
    return 0;
}

int main(void) {
  printf("128은(는) 100보다 크고 200보다 작습니다. : %d\n", is_bigger_than_100_and_less_than_200(128));
  printf("28은(는) 100보다 크고 200보다 작습니다. : %d\n", is_bigger_than_100_and_less_than_200(28));
  return 0;
}