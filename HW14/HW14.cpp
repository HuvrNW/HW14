#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "Russian");
	
	// Задание 1 Массив и ср арифм четных элементов
	std::cout << "\t\tЗадание 1.\n Массив и ср арифм четных элементов.\n Массив: \n";
	double x = 0, y = 0;
	const int size1 = 10;
	int arr1[size1]{ 4, 25, 8, 49, 6, 37, 2, 13, 12, 73 };
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
		if (arr1[i] % 2 == 0) {
			y += arr1[i]; // сумма всех четных элементов массива.
			x++; // счетчик четных элементов массива.
		}
	}
	std::cout << "\n Ср арифм всех четных элементов массива = " << y / x << ".\n\n";

	// Задание 2 Случайный массив.
	std::cout << "\t\tЗадание 2.\n Случайный массив. \n Массив: \n";
	const int size2 = 10;
	int arr2[size2];
	srand(time(NULL));
	int n ,a = 50, b = 70;
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (b - a) + a;
		std::cout << arr2[i] << " ";
	}
	std::cout << "\n Введите число --> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++)
		if (arr2[i] >= (n - 3) && arr2[i] <= (n + 3))
			std::cout << arr2[i] << " ";




	return 0;
}