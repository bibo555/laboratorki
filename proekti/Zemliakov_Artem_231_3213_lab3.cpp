#include <iostream>
using std::cout;
using std::cin;
void puzir(int lenght, int* mass) {
	int t;
    for (int i = 0; i< lenght ; i++) {
	    for (int j = 0; j<lenght-1; j++) {
		    if (mass[j] > mass[j+1]) {
			    t = mass[j];
			    mass[j] = mass[j+1];
			    mass[j+1] = t;
			}
		}
	}
	return;
}
void sort_podw(int lenght, char* mass) {
	int counter[26] = { 0 }, j;
	for (int i = 0; i < lenght; i++) {
		j = int(mass[i] - 'a');
		counter[j]++;
	}
	int i = 0;
	j = 0;
	while (j < 26) {
		if (counter[j] > 0) {
			mass[i] = char('a' + j);
			counter[j]--;
			i++;
		}
		else {
			j++;
		}
	}
	return;
}

void vvod(int*mass, int lenght) {
	for (int i = 0; i < lenght; i++) {
		cin>>mass[i];
	}
}
void vvod1(char* mass, int lenght) {
	for (int i = 0; i < lenght; i++) {
		cin >> mass[i];
	}
}
int main() {
	int mass[1000];
	char mass1[1000];
	int vibor = 0;
	while (true) {
		cout << "What task you want to choice?" << std::endl;
		cout << "Task 1" << std::endl;
		cout << "Task 2" << std::endl;
		cout << "Exit" << std::endl;
		cin >> vibor;
		switch (vibor) {
		case 1:
			cout << "Input lenght";
			int lenght;
			cin >> lenght;
			vvod(mass, lenght);
			puzir(lenght, mass);
			for (int i = 0; i < lenght; i++) {
				cout << mass[i] << ' ';
			};
			break;
		case 2:
			cout << "Input lenght";
			int lenght1;
			cin >> lenght1;
			vvod1(mass1, lenght);
			sort_podw(lenght, mass1);
			for (int i = 0; i < lenght; i++) {
				cout << mass1[i] << ' ';

			}
			break;
		case 3:

			break;
		default:
			return 0;
			{
				return 0;
				{

				}
			}
		}
	}
}
