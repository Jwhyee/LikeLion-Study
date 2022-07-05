// 문장을 출력하는 함수(print_str)를 만들어주세요.(%s 사용 금지)
// 조건 : %s를 사용할 수 없다.

#include <stdio.h>
void print_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main(void)
{
    char str1[10];
    str1[0] = 'a';
    str1[1] = 'b';
    str1[2] = 'c';
    str1[3] = '\0';

    print_str(str1);
    // print_str 함수를 활용하여 문장 str1 출력 실행
    // 출력 => abc

    char str2[10];
    str2[0] = 'h';
    str2[1] = 'e';
    str2[2] = 'l';
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = ' ';
    str2[6] = 'c';
    str2[7] = '\0';

    print_str(str2);

    // print_str 함수를 활용하여 문장 str2 출력 실행
    // 출력 => hello c

    return 0;
}