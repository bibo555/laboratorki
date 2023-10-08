#include <iostream>
using std::cin;
using std::cout;
void task1()
{
	int x, a = 0, b = 0;
	cin >> x;
	while (x >= a) {
		a += 1;
		while (b < a) {
			cout << b;
			b += 1;
		}
		b = 0;
		cout << std::endl;
	}

}
void task2()
{
	int n = 0;
	cout << "Input n" << ;
	cin >> n;
	int cnk = 1;
	for (int k = 1; k <= n; k++) {
		cout << "cn^" << k - 1 << "=" << cnk << std::endl;
		cnk = cnk * (n - (k - 1)) / (k);
	}
	std::cout << "cn^" << n << " = " << cnk << std::endl;

}
void task3()
{
	double e, s = 0;
	int t = 0;
	cin >> e;
	t += 1;
	s += e;
	while (e != char()) {
		cin >> e;
		k++;
		s += e
	}
	cout << s / k << std::endl;

}
int main()
{
	int vibor = 0;
	while (true) {
		cout << "What task ypu want to choice?" << std::endl;
		cout << "Task 1" << std::endl;
		cout << "Task 2" << std::endl;
		cout << "Task 3" << std::endl;
		cout << "Exit" << std::endl;
		cin >> vibor;
		switch (vibor) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		default:
			return 0;
			{
				return 0;
				{

				}
