#include <stdio.h>

int main() {
    int front;
    int rear;
    scanf("%d-%d", &front, &rear);
    printf("%06d%07d", front, rear);
    return 0;
}
