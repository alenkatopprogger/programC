/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    double temperature;
    char unit;

    printf("Input temperature: ");
    scanf("%lf", &temperature);
    
    printf("Ouput temperature: ");
    scanf(" %c", &unit);

    if (unit == 'C' || unit == 'c') {
        printf("%.2f C = %.2f F\n", temperature, (temperature * 9.0 / 5.0) + 32.0);
    } else if (unit == 'F' || unit == 'f') {
        printf("%.2f F = %.2f C\n", temperature, (temperature - 32.0) * 5.0 / 9.0);
    } else {
        printf("Ouput error\n");
    }

    return 0;
}