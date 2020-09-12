#include <iostream>

int main() {

  //  int n;
 //   std::cin >> n;

    int arr[100];
    std::cin >> arr[100];
    std::cout << arr[100] << std::endl;

    int a;

    for(int i = 0; i < 100; i++) {

        if(arr[i] % 2 == 0 && arr[i] < arr[i+1]) {
            a = arr[i];
        }

    }

    std::cout << a;

    return 0;
}