#include <iostream>
#include <cmath>

using namespace std;

int main() {        // тело программы
    
    float a, b, c;
    float minX, maxX, stepX;

    // ввод значений для вычисления мат. функции

    cout << "Enter min X: ";        cin >> minX;
    cout << "Enter max X: ";        cin >> maxX;
    cout << "Enter step: ";         cin >> stepX;
    cout << "Enter a, b, c: ";      cin >> a, b, c;

    for(float x = minX; x <= maxX; x += stepX) {    // цикл для проверки условия на интервале

        float function;

        if ((a + x) < 0 && b != 0) {                // условия для вычисления мат.функции
            function = a * log(x) - cos(x) / c;
        } else if((a + x) > 0 && b == 0) {
                function = sin((x - a) / (x - b));
        } else {
                    double e = 2.7182818284590452353602874713527;
                    function = pow(e, x) + (a + pow(x, 2)) / c;
        }

        cout << "x = " << x << "    F = " << function << endl;  // вывод ответа

    }

    return 0;
}