#include <stdio.h>
#define NUM 100

int main(void){
    double ave;
    int hist[11]={0};
    int all, tensu = 0, kaisu;

    for(kaisu = 0; kaisu < NUM; kaisu++){
        printf("点数を入力してください："); scanf("%d", &tensu);
        if(tensu < 0){
            break;
        }
        all += tensu;
        tensu /= 10;
        hist[tensu]++;
    }

    ave = all / kaisu;
    ave = (int)(ave * 100 + 0.5) / 100.0;

    printf("average: %f\n\n", ave);
    for(int i = 0;i < 11; i++){
        printf("hist[%d]: %d\n", i, hist[i]);
    }
    return 0;
}