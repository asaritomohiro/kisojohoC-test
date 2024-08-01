#include <stdio.h>

int main() {
    int n1, n2;
    double a=-2.53e+1,b=1.79e-1,c;
    c = a*b;
    n1 = a < b;
    if ((c <= 0.0) || (c > -1.0e+1)) {
        n2 = 0xf0;
    }else{
        n2 = 0x0f;
    }

    printf("n1=%d, n2=%d\n", n1, n2);
    printf("a=%f, b=%f, c=%f\n", a, b, c);
}