#include <stdio.h>

int main() {
    int x, w = 0, h, c = 0;
    printf("面積を入力してください: ");
    scanf("%d", &x);

    do {
        w++;
        if (x % w == 0) {
            c++;
        }
    } while (w <= x);
    printf("%d\n", c);
}