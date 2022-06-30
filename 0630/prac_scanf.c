// 문제 : scanf 할때 왜 변수의 주소를 매개변수로 넘겨주는 지 설명해주세요.

#include <stdio.h>

int main(void)
{
    int input;
    // 메모리에 input에 대한 공간을 만들어준다.

    printf("정수를 입력해주세요. :");
    scanf("%d", &input);
    // 만들어준 공간에 입력한 수를 넣어준다.
    

    printf("입력하신 수는 %d 입니다.", input);

    return 0;
}