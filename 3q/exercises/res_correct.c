#include <stdio.h>

int main(void) {
    int hist[11] = {}, i, sum = 0, inputNumber, insertNum, length = 0;
    double ave;

    while(1) {
        scanf("%d", &inputNumber);
        if (inputNumber < 0) break;
        insertNum = inputNumber / 10;
        hist[insertNum]++;
        sum += inputNumber;
        length++;
    };
    
    ave = (((int)((sum / length) * 10 + 5))) / 10;
    printf("ave: %.1f \n", ave);
    for(i=0; i <= 10; i++) {
        printf("hint[%d]: %d \n", i, hist[i]);
    }
    return 0;
}