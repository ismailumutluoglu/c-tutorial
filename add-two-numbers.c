#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int sum = 0;

    printf("Birinci sayiyi giriniz : ");
    scanf("%d", &num1);

    printf("İkinci sayiyi giriniz : ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}