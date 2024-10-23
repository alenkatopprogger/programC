#include <stdio.h>

int main() {
  int n, a, s, k;

  printf("Введите целое число: ");
  scanf("%d", &a);

  n = a;
  s = 0;

  for (n = a; n != 0; n = n / 10) {
    k = n % 10;
    if (k > s) {
      s = k;
    }
  }

  printf("Наибольшая цифра в числе %d: %d\n", a, s);

  return 0;
}