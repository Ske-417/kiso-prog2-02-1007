// 三項演算子で、nが偶数か奇数かを判定して表示する
#include <stdio.h>

int main(void)
{
    int n = 567891;
    printf("%s\n", (n % 2 == 0) ? "偶数" : "奇数");
    return 0;
}
