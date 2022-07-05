// 문제 : 고객에게 숫자를 10개 입력받아서 배열에 넣기
// 조건 : 변수를 2개만 사용해주세요.
// 조건 : 포인터 문법을 쓸 수 없습니다.

/*
== 입력 ==
1번째 숫자를 입력해주세요 : 1[엔터]
2번째 숫자를 입력해주세요 : 2[엔터]
3번째 숫자를 입력해주세요 : 3[엔터]
4번째 숫자를 입력해주세요 : 4[엔터]
5번째 숫자를 입력해주세요 : 5[엔터]
6번째 숫자를 입력해주세요 : 6[엔터]
7번째 숫자를 입력해주세요 : 7[엔터]
8번째 숫자를 입력해주세요 : 8[엔터]
9번째 숫자를 입력해주세요 : 9[엔터]
10번째 숫자를 입력해주세요 : 10[엔터]

== 출력 ==
1번째 입력받은 숫자 : 1
2번째 입력받은 숫자 : 2
3번째 입력받은 숫자 : 3
4번째 입력받은 숫자 : 4
5번째 입력받은 숫자 : 5
6번째 입력받은 숫자 : 6
7번째 입력받은 숫자 : 7
8번째 입력받은 숫자 : 8
9번째 입력받은 숫자 : 9
10번째 입력받은 숫자 : 10
*/

#include <stdio.h>

int main(void)
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 숫자를 입력해주세요 : ", i+1);
        scanf("%d", &array[i]);

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 입력받은 숫자 : %d\n", i + 1, array[i]);
    }
    return 0;
}