#include <stdio.h>

int main() {
    int n;
    long long s = 1;
    int i;

    printf("Введите число n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Факториал для отрицательных чисел не определен.\n");
        return 1;
    }

    for (s = 1, i = 1; i <= n; i++) {
        s = s * i;
    }

    printf("Факториал %d = %lld\n", n, s);

    return 0;
}