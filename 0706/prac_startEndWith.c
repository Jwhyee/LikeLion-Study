#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool str_part_equals(char* s, int start, int end, char* k) {
    int s_len = strlen(s);
    int k_len = strlen(k);

    if (k_len > s_len) return false;
    if (start < 0) return false;
    if (end > s_len ) return false;
    if (start > end) return false;

    int j = 0;

    for (int i = start; i < end; i++) {
        if (s[i] != k[j]) {
            return false;
        }
        j++;
    }

    return true;
}

int main(void) {
    printf("str_part_equals(\"abcd\", 0, 2, \"ab\") : %d\n", str_part_equals("abcd", 0, 2, "ab"));
    // 출력 => str_equals("abcd", 0, 2, "ab") : 1

    printf("str_part_equals(\"abcd\", 1, 2, \"b\") : %d\n", str_part_equals("abcd", 1, 2, "b"));
    // 출력 => str_equals("abcd", 1, 2, "b") : 1

    printf("str_part_equals(\"abcd\", 2, 2, \"\") : %d\n", str_part_equals("abcd", 2, 2, ""));
    // 출력 => str_equals("abcd", 2, 2, "") : 1

    printf("str_part_equals(\"abcd\", 2, 4, \"cb\") : %d\n", str_part_equals("abcd", 2, 4, "cb"));
    // 출력 => str_equals("abcd", 2, 4, "cb") : 0

    printf("str_part_equals(\"abcd\", 2, 4, \"cd\") : %d\n", str_part_equals("abcd", 2, 4, "cd"));
    // 출력 => str_equals("abcd", 2, 4, "cb") : 1

    return 0;
}