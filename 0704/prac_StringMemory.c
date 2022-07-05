#include <stdio.h>

int main(void)
{
    char *arr1 = "abc"; // 4바이트 짜리 문자배열
    char *arr2 = "abc"; // 4바이트 짜리 문자배열
    char *arr3 = "bc";  // 4바이트 짜리 문자배열

    printf("arr1 : %ld\n", (long)arr1);
    printf("arr2 : %ld\n", (long)arr2);
    printf("arr3 : %ld\n", (long)arr3);

    return 0;
}