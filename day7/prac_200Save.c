#include "stdio.h"
   

int main(void) {

    unsigned char i = 200;
    // -128 ~ 127 -> 0~255로 음수를 양수로 몰빵해준다.

    printf("i = %u\n", i);

    int s1 = 2100000000;
    // 21억
    printf("s = %d\n", s1);

    unsigned int s2 = 2200000000;
    // 22억
    printf("s = %u\n", s2);

    unsigned int s3 = 4200000000;
    // 42억
    printf("s = %u\n", s3);

    long s4 = 40000000000;
    // 400억
    printf("s = %ld\n", s4);
  
  return 0;
}