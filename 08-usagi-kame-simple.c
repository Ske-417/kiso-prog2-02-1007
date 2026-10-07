// 偶数番目はウサギ、奇数番目はカメを表示し、10の倍数回ではウサギを休憩させる
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%2d: %s\n", i,
               (i % 10 == 0) ? "ウサギ（休憩）" :
               (i % 2 == 0) ? "ウサギ" : "カメ");
    }
    return 0;
}
