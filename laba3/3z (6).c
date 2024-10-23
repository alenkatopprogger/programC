#include <stdio.h>

int main() {
  int n, a, s, k;

  printf("Введите целое число: ");
  scanf("%d", &a);

  n = a;
  s = 0;

  for (n = a; n != 0; n = n / 10) {
    k = n % 10;
    s = s * 10 + k; 
  }

  printf("Число в обратном порядке: %d\n", s);

  return 0;
}
