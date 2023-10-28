#include <stdio.h>
#include <windows.h>

int maxi3(int x, int y, int z);
int mini3(int x, int y, int z);

int main(void)
{
    int number1;
    int number2;
    int number3;
    fflush(stdin);
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);

    printf("%s", "Podaj trzy liczby całkowite: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("\nNajwiększa liczba to: %d", maxi3(number1, number2, number3));
    printf("\nNajmniejsza liczba to: %d\n", mini3(number1, number2, number3));

    system("pause");
    return 0;
}
int maxi3(int x, int y, int z)
{
    int max = x;
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}
int mini3(int x, int y, int z)
{
    int min = x;
    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }
    return min;
}