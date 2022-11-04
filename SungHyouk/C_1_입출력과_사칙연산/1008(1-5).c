#include <stdio.h>

int main(void) {
    int a, b;
    double n;

    scanf("%d%d", &a, &b);
    
    n = ((double) a / (double) b);

    printf("%.9lf", n);

    return 0;
}
