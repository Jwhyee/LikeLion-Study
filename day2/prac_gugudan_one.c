#include<stdio.h>

int main(){
    int n = 1;

    for(int i = 1; i <= 9; i++){
        int sum = n * i;
        printf("%d * %d = %d\n", n, i, sum);
    }
}