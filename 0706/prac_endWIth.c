#include <stdio.h>

typedef int bool;

#define true 1
#define false 0
int get_str_len(char* str){
        int len = 0;
        while (1)
        {
            if( str[len] == NULL ){
                return len;
            }
            len++;
        }
        return len;
}

bool ends_with(char* string, char* target){
    int str = get_str_len(string);
    int tar = get_str_len(target);

    if(str < tar) return false;

    for(int i = 0; string[i] != '\0'; i++){
        if (string[i] == target[i])
        {
            if(string[i+1] == target[i+1]) return true;
        } else{
            return false;
        }
    }

}

int main(void) {
  
  bool rs;
  
  rs = ends_with("abc", "bc");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 0

  rs = ends_with("kbs", "bs");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}