#include <iostream>
using std::cin;
using std::cout;


void input(int*& arr, int& size) { // Считывание массива
	cout << "Enter the size of array: " << std::endl;
	cin >> size;
	if (arr != nullptr) {
		delete[] arr;
	}
	arr = new int[size];
	cout << "Enter elements: " << std::endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void output(int* arr, int size) { // Вывод массива
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << std::endl;
}


void sortsum(int* arr, int size) {
	int* b = new int[100];
	int* mas = new int[size];
	int* massiv = new int [size] {0};
	int c = 0, s = 0;
	int temparr = 0, tempmassiv = 0;
	for (int i = 0; i < size; i++) {
		mas[i] = arr[i];
		while (mas[i] != 0) {
			b[c] = mas[i] % 10;
			mas[i] /= 10;
			c++;
		}
		for (int j = 0; j < c; j += 2) { // идем по индексам цифр числа в строке;
			massiv[i] += b[j];
		}
		c = 0;
		s = 0;
	}
	for (int j = 0; j < size; j++) { // сортируем по сумме, запоминаем и меняем индексы.
		for (int f = 0; f < size - 1; f++) {
			if (massiv[f] > massiv[f + 1]) {
				tempmassiv = massiv[f];
				temparr = arr[f];
				massiv[f] = massiv[f + 1];
				massiv[f + 1] = tempmassiv;
				arr[f] = arr[f + 1];
				arr[f + 1] = temparr;
			}
		}
	}
	delete[] mas;
	delete[] b;
	delete[] massiv;
}

void sortlast(int* arr, int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] % 10 > arr[j + 1] % 10) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			else if (arr[j] % 10 == arr[j + 1] % 10) {
				if (arr[j] < arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
int main() {
	int choise = 0;
	int* arr = nullptr;
	int size = 0;
	while (true) {
		cout << "What you want to do?" << std::endl;
		cout << "1.Input array:" << std::endl;
		cout << "2.Output array" << std::endl;
		cout << "3.Sort array by sum of digits on even positions" << std::endl;
		cout << "4.Sort by last number" << std::endl;
		cout << "5.Exit " << std::endl;
		cin >> choise;
		switch (choise) {
		case 1: {
			input(arr, size);
			break;
		}
		case 2: {
			output(arr, size);
			break;
		}
		case 3: {
			sortsum(arr, size);
			break;
		}
		case 4: {
			sortlast(arr, size);
			break;
		}
		default: {
			delete[] arr;
			return 0;
		}
		}
	}
	delete[] arr;
	return 0;
}
