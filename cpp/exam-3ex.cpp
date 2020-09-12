#include <iostream>

int main() {

    for(int k = 0; k < 100; k++) {

        int n;

        std::cout << "Vvedite chislo";
        std::cin >> n;

        for(int i = 2; i < n; i++) {

            if(n % i == 0) {
                std::cout << n << " Ne prostoe chislo" << std::endl;
                break;
            }

        std::cout << n << " Prostoe chislo" << std::endl;
        break; 

        }  

    }

    return 0;
}