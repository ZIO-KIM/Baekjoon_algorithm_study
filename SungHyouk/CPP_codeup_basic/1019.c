#include <stdio.h>

int main() {
    int yyyy, mm, dd;
    scanf("%d.%d.%d", &yyyy, &mm, &dd);
    printf("%04d.%02d.%02d", yyyy, mm, dd);
    return 0;
}
