#include <cstdio>

int n, storage;
int array[1010];

int main() {
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        storage = i;
        for (int j = 2; j <= i; j++) {
            while (storage % j == 0) {
                array[j]++;
                storage /= j;
            }
        }
    }
    for (int i = 1; i <= 1010; i++) {
        if (array[i] != 0) {
            printf("%d %d\n", i, array[i]);
        }
    }
    return 0;
}
