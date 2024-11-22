/*
情報処理 後期中間 演習試験

100人以下のクラスにおいて、試験の平均点と10点きざみの点数の度数分布（ヒストグラム）を求めたい。
個々の学生の点数（正の整数、100点満点）を順に入力していき、負の数値を入力したら、直前までに入力された分について、平均点とヒストグラムを求め出力するプログラムを作成せよ。

平均点は小数点以下第二位を四捨五入し変数aveに格納し、ヒストグラムは配列histに以下の通り格納せよ。
　hist[0]: 0 - 9点の人数
　hist[1]: 10 - 19点の人数
　　…
　hist[9]: 90 - 99点の人数
　hist[10]: 100点の人数

最後に平均点及び、ヒストグラムを画面出力すること。
*/

#include <stdio.h>

int main(void) {
    int i, input, sum = 0, hist[11] = {0};
    double ave;

    for (i = 0; i < 100; i++) {
        scanf("%d", &input);

        if (input < 0) break;

        sum += input;
        ave = (double)sum / (i + 1);

        if (input < 10) {
            hist[0]++;
        } else if (input < 20) {
            hist[1]++;
        } else if (input < 30) {
            hist[2]++;
        } else if (input < 40) {
            hist[3]++;
        } else if (input < 50) {
            hist[4]++;
        } else if (input < 60) {
            hist[5]++;
        } else if (input < 70) {
            hist[6]++;
        } else if (input < 80) {
            hist[7]++;
        } else if (input < 90) {
            hist[8]++;
        } else if (input < 100) {
            hist[9]++;
        } else {
            hist[10]++;
        }
    }

    printf("average: %f\n", ave);
    printf(
        "hist[0]: %d\nhist[1]: %d\nhist[2]: %d\nhist[3]: %d\nhist[4]: %d\nhist[5]: %d\nhist[6]: %d\nhist[7]: %d\nhist[8]: %d\nhist[9]: %d\nhist[10]: %d\n",
        hist[0], hist[1], hist[2], hist[3], hist[4], hist[5], hist[6], hist[7], hist[8], hist[9], hist[10]
    );

    return 0;
}