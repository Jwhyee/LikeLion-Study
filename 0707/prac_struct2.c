// 문제 : 구조체 변수에 원본이 들어있는지 참조가 들어있는지 확인해주세요.

#include <stdio.h>

struct Person {
  int age;
  char* name;
};

void change(struct Person p){
    p.age = 1234;
    p.name = "최숑";
}

int main(void) {
  struct Person p1;
  p1.name = "홍길동";
  p1.age = 22;
  printf("안녕하세요 제 이름은 %s 이고, 나이는 %d 입니다. \n", p1.name, p1.age);

  struct Person p2 = p1;
  printf("p2.age++ 전 \n");
  printf("p1 나이는 %d 입니다. \n", p1.age);
  printf("p2 나이는 %d 입니다. \n", p2.age);
  
  p2.age++;
  printf("p2.age++ 후 \n");
  printf("p1 나이는 %d 입니다. \n", p1.age);
  printf("p2 나이는 %d 입니다. \n", p2.age);

  printf("p1 change 전 \n");
  printf("p1 나이는 %d 입니다. \n", p1.age);

  change(p1);
  printf("p1 change 후 \n");
  printf("p1 나이는 %d 입니다. \n", p1.age);
  return 0;
}