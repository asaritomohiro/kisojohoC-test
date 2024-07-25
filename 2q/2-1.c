#include <stdio.h>

int main() {
    int u=0465, v=0x1ff, w;
    double x=-1.28e-2, y;
    x = y;
    y = ((u*10)/12)/10.0;
    v %= 16;
    w = ++u;

    printf("u=%d, v=%d, w=%d, x=%f, y=%f\n", u, v, w, x, y);
}