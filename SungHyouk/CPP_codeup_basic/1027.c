#include <stdio.h>

int main() {
    int d, m, y;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);

    return 0;
}
