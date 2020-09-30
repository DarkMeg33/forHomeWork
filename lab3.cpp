#include <iostream>

using namespace std;

void getSumm(int arr[][7], int sizeOfRow) {

	int counter = 0;

	for (int i = 0; i < sizeOfRow; i++) {

		int summ = 0;
		int flag = 1;

		for (int j = 0; j < sizeOfRow; j++) {

			flag = 1;

			if (arr[j][i] < 0) {
				summ = 0;
				flag = 0;
				break;
			}

			summ += arr[j][i];

		}

		counter++;

		if (flag) {
			cout << "Summ of " << counter << " column is: " << summ << endl;
		}

	}

	return;
}

int getMin(int arr[], int arrSize) {

	int min = *arr;

	for (int i = 0; i < arrSize; i++) {

		if (arr[i] < min) {
			min = arr[i];
		}

	}

	return min;
}

void minDiagonal(int arr[][7], int sizeOfRow) {

	int summ = 0;
	int counter1 = sizeOfRow - 2;
	int pointer1 = 2;

	int newArr[5];

	cout << endl;
	cout << "Summ of diagonals is: " << endl;

	for (int k = 0; k < sizeOfRow - 2; k++) {

		for (int i = 0; i < sizeOfRow; i++) {

			for (int j = counter1; j > -1; j--) {
				
				summ += arr[i][j];
				break;

			}

			counter1--;

			if (counter1 < 0) {
				break;
			}

		}

		pointer1++;
		counter1 = sizeOfRow - pointer1;
		cout << summ << "\t";
		newArr[k] = summ;
		summ = 0;

	}

	int min1 = getMin(newArr, sizeOfRow - 2);

	int counter2 = 1;
	int pointer2 = sizeOfRow - 1;


	for (int k = 0; k < sizeOfRow - 2; k++) {

		for (int i = sizeOfRow - 1; i > -1; i--) {

			for (int j = counter2; j < sizeOfRow; j++) {

				summ += arr[i][j];
				break;

			}

			counter2++;

			if (counter2 > sizeOfRow) {
				break;
			}

		}

		pointer2--;
		counter2 = sizeOfRow - pointer2;
		cout << summ << "\t";
		newArr[k] = summ;
		summ = 0;

	}

	int min2 = getMin(newArr, sizeOfRow - 2);

	if (min1 < min2) {
		cout << endl << endl;
		cout << "Minimal diagonal is: " << min1;
	} else {
		cout << endl << endl;
		cout << "Minimal diagonal is: " << min2;
	}

	return;
}

int main() {

	const int n = 7;

	int arr[n][n] = {
		{2, 3, 9, 2, 5, 9, 1},
		{4, 8, -4,3, 6, 6, 1},
		{2, 4, 2, 3, 6, 1, 1},
		{4, 5, 6, 7, 3, 9, 1},
		{5, 3, 4, 5, 8, 4, 1},
		{9, 3, 2, 4, -4, 7, 1},
		{1, 1, 1, 1, 1, 1, 1}
	};

	getSumm(arr, n);
	minDiagonal(arr, n);

	return 0;
}