/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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