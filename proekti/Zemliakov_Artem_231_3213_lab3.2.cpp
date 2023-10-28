/*#include <iostream>
using namespace std;
class matr {
public:
	int stl, str;
	void Getstl
	double* point;
	matr(int stl,int str)
	{
		point = new double(stl * str);
	}
	void Print()
	{

	}
};
int main() {
	matr A(2, 2);

	return 0;
}
*/
#include <iostream>
using std::cout;
using std::cin;
int swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
	return 0;
}
/*void vivod(int* temp_mas, int size) {
	for (unsigned int i = 0; i < size; i++) {
		cout << "Значение массива" << temp_mas[i] << std::endl;


	}
	return;
}*/
/*void chetnie(int* temp_mas, int size) {
	int n, a = 0, c;
	double sort;
	cin >> size;
	temp_mas = new int[size];
	for (int i; i < n; i++) {
		if ((i % 2) == 0) {
			temp_mas[a] = temp_mas[*i];
			a++;

		}

	}
	while (sort) {
		sort = 0;
		for (i = 0; i < a - 1; i++) {
			if (temp_mas[i] > temp_mas[i + 1]) {
				c = temp_mas[i];
				temp_mas[i] = temp_mas[i + 1];
				temp_mas[i + 1] = c;
				sort = 1;
			}
		}
	}

	return;

}*/
void tears(int* mas, int size) {
	int count = 0;
	int sum1, sum2;
	int* s = new int[size];
	for (int i = 0; i < size; i++) {
		int c = mas[i];
		sum1 = 0;
		sum2 = 0;
		count = 0;
		while (c != 0)
		{
			if (count % 2 == 0)
				sum2 += c % 10;
			else
				sum1 += c % 10;
			c /= 10;
		}
		if (count % 2 == 0)
			s[i] = sum2;
		else
			s[i] = sum1;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++) {
			if (s[j] < s[j + 1]) {
				swap(&s[j], &s[j + 1]);
				swap(&mas[j], &mas[j + 1]);
			}

		}
	}
	delete[] s;
	return;
}
void eweodnasort() {
	return;
}
int* vvod(int size) {
	int* temp_mas = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> temp_mas[i];
	}
	return temp_mas;
}
void vivod(int* temp_mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << temp_mas[i] << ' ';
	}
	return;
}
char* vvod1(int size) {
	char* temp_mas = new char[size];
	for (int i = 0; i < size; i++) {
		cin >> temp_mas[i];
	}
	return temp_mas;
}


int main() {
	int* temp_mas = NULL;
	char* temp_mass = NULL;
	int vibor = 0;
	int size = 0;
	while (true) {
		cout << "What task you want to choice?" << std::endl;
		cout << " Task 1" << std::endl;
		cout << " Task 2" << std::endl;
		cout << " Task 3" << std::endl;
		cout << " Task 4" << std::endl;
		cout << " Task 5" << std::endl;
		cin >> vibor;
		switch (vibor) {
		case 1:
			cout << "Input lenght" << std::endl;
			cin >> size;
			temp_mas = vvod(size);
			break;


		case 3:
			if (size != 0)
				tears(temp_mas, size);
			else
				std::cout << "Mistake mas is empty or not exist";
			break;
		case 2:
			vivod(temp_mas, size);
		case 4:
			break;
		case 5:

			break;
		default:
			break;
		}
		delete[] temp_mass;
	}
