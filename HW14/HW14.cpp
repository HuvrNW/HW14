#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "Russian");
	
	// ������� 1 ������ � �� ����� ������ ���������
	std::cout << "\t\t������� 1.\n ������ � �� ����� ������ ���������.\n ������: \n";
	double x = 0, y = 0;
	const int size1 = 10;
	int arr1[size1]{ 4, 25, 8, 49, 6, 37, 2, 13, 12, 73 };
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << " ";
		if (arr1[i] % 2 == 0) {
			y += arr1[i]; // ����� ���� ������ ��������� �������.
			x++; // ������� ������ ��������� �������.
		}
	}
	std::cout << "\n �� ����� ���� ������ ��������� ������� = " << y / x << ".\n\n";

	// ������� 2 ��������� ������.
	std::cout << "\t\t������� 2.\n ��������� ������. \n ������: \n";
	const int size2 = 10;
	int arr2[size2];
	srand(time(NULL));
	int n ,a = 50, b = 70;
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (b - a) + a;
		std::cout << arr2[i] << " ";
	}
	std::cout << "\n ������� ����� --> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++)
		if (arr2[i] >= (n - 3) && arr2[i] <= (n + 3))
			std::cout << arr2[i] << " ";




	return 0;
}