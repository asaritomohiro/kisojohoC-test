#include <stdio.h>
#include <math.h>

int main() {
    int number, exponent = 0;
    double mantissa;

    printf("正の整数を入力してください: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("正の整数を入力してください。\n");
        return 1;
    }

    mantissa = number;

    // 10以上の場合は、仮数部が1以上10未満になるまで10で割り、指数を増加
    while (mantissa >= 10) {
        mantissa /= 10;
        exponent++;
    }

    // 1未満の場合は、仮数部が1以上10未満になるまで10を掛け、指数を減少
    while (mantissa < 1) {
        mantissa *= 10;
        exponent--;
    }

    // 有効数字2桁に丸める
    mantissa = round(mantissa * 10) / 10.0;

    printf("仮数部: %.1f\n", mantissa);
    printf("指数部: %d\n", exponent);

    return 0;
}