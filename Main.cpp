#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1. Сортировка первых 5 элементов
	std::cout << "Задача 1. Сортировка первых 5 элементов\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1; // [1,10]
		std::cout << arr1[i] << "  ";
	}
	std::cout << '\n';
	std::cout << "Сортировка первых 5 элементов:\n";
	
	// Пузырьковая сортировка
	//for (int i = 4; i > 0; i--)
	//	for (int j = 0; j < i; j++)
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);
	
	// Быстрая сортировка
	std::sort(arr1, arr1 + 5);

	for (int i = 0; i < size1; i++) 
		std::cout << arr1[i] << "  ";
	std::cout << '\n';


	// Задача 2. Температура в январе
	std::cout << "\nЗадача 2. Температура в январе\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 30 - 30; // [-30,-1]
		std::cout << arr2[i] << "  ";
	}
	std::cout << "\n\nВведите максимальную температурe для отображения -> ";
	std::cin >> n;
	int sum = 0, counter = 0;
	for (int i = 0; i < size2; i++) {
		sum +=arr2[i];
		if (arr2[i] <= n)
			counter++;
	}
	std::cout << "Средняя температура января = " << double(sum) / size2;
	std::cout << "\nНиже " << n << " температура опускалась " << counter << " раз\n";


	// Задача 3. Вхождение в диапазон
	std::cout << "\nЗадача 3.Вхождение в диапазон\n\nВведите начало диапазона -> ";
	std::cin >> n;
	std::cout << "\nВведите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "\nМассив:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';

	}


	return 0;

}