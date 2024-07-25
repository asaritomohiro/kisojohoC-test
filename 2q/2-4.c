#include <stdio.h>

int main() {
    int d=80,j=1,n=0,v=0,w;
    while (j < 9) {
        w = d%j;
        if (w) {
            w *=5;
        } else {
            v +=j;
            ++n;
        }
        ++j;
    }

    printf("d=%d, j=%d, n=%d, v=%d, w=%d\n", d, j, n, v, w);
}