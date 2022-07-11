#include <cstdio>

int main() {
    unsigned a;
    scanf("%*C%X", &a);
    printf("#%06X", (0xffffff - a));
    return 0;
}
