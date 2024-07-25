#include <stdio.h>

int main() {
    int i=0,m=1,n=2,s=0,t;
    do {
        t = m + n;
        s += (n + t)/2;
        m=n;
        n = t;
        ++i;
    } while (i < 5);
    
    printf("i=%d, m=%d, n=%d, s=%d, t=%d\n", i, m, n, s, t);
}