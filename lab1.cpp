#include <stdio.h>
#include <math.h>

int main() {        // тело программы
    
    float a, b, c;
    float minX, maxX, stepX;
    float function, x;

    // ввод значений для вычисления мат. функции

    printf("Vvedite min X:");     scanf("%f\n", &minX); 
    printf("Vvedite max X:");     scanf("%f\n", &maxX);
    printf("Vvedite step:");      scanf("%f\n", &stepX);
    printf("Vvedite a, b, c");    scanf("%f%f%f\n", &a, &b, &c);

    for(float i = minX; i <= maxX; i += stepX) {    // цикл для проверки условия на интервале

        x = i;

        if ((a + x) < 0 && b != 0) {                // условия для вычисления мат.функции
            function = a * log(x) - cos(x) / c;
        } else if((a + x) > 0 && b == 0) {
                function = sin((x - a) / (x - b));
        } else {
                    double e = 2.7182818284590452353602874713527;
                    function = pow(e, x) + (a + pow(x, 2)) / c;
        }

        printf("x = %.2f   F = %.2f\n", x, function);  // вывод ответа

    }

    return 0;
}