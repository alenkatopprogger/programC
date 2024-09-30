/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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