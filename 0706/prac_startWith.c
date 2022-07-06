#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

int starts_with(char* str, char* target){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target[i])
        {
            if(str[i+1] == target[i+1]) return 1;
        } else{
            return 0;
        }
        
    }
}

int main(void) {
  
  bool rs;
  
  rs = starts_with("abc", "ab");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}