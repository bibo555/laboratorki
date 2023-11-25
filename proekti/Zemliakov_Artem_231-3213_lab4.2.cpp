#include <iostream>
#include <string> // для c++ класса string
#include <fstream> // для работы с файлами через fstream, ifstream, ofstream
//str.size();
//rfind - последние вхождение символа.
//replace(арг1, агрг2) - замена местами.
//strlen()
//substr(1. индекс начинается подстрока, 2. количество символов);
//find_first_of
//find_last_of
using namespace std;

string file_format(const string str) {
	int index = str.rfind('.');   //qwertasdfwertsadf wer
	return str.substr(index);
}

string file_name(const string str) {
	int index = str.find_last_of('\\');
	int index2 = str.rfind('.');
	return str.substr(index + 1, index2 - index - 1);
}

string file_path(const string str) {
	int index = str.find_last_of('\\');
	return str.substr(0, index);
}

void file_disk(const string str) {
	int index = str.find_first_of('\\');
	cout << str.substr(0, index);
}

bool file_rename(string* str) {
	string new_name; cin >> new_name;
	int index = str->find_last_of('\\');
	int index2 = str->rfind('.');
	*str = str->substr(0, index) + '\\' + new_name + str->substr(index2);
	return 1;
}

bool file_copy(const string file_path_full)
{
	string copy_path = file_path_full;
	size_t slash = file_path_full.rfind("/");
	size_t dot = file_path_full.rfind(".");
	string copy_name;
	copy_name += (file_path_full, slash + 1, dot - slash - 1) + "_copy";
	copy_path.replace(slash + 1, dot - slash - 1, copy_name);

	ifstream read;
	read.open(file_path_full);


	if (!read.fail())
	{
		ofstream write;
		write.open(copy_path);
		if (!write.fail())
		{
			string line;
			if (write.is_open() && read.is_open())
			{
				while (getline(read, line))
				{
					write << line << endl;
				}
			}
			write.close();
			read.close();
			return true;
		}
		else return false;
	}
	else return false;
}

int main() {
	string str;
	setlocale(LC_ALL, "Russian");
	str = "C:\\Laba\\eweodna\\Source.cpp";
	string strcop = str;
	int choise = 0;
	while (true) {
		cout << "Выберите действие: " << std::endl;
		cout << "1. Получить расширение: " << std::endl;
		cout << "2. Получить название: " << std::endl;
		cout << "3. Получить расположение: " << std::endl;
		cout << "4. Получить название диска: " << std::endl;
		cout << "5. Переименовать файл" << std::endl;
		cout << "6. Создать копию" << std::endl;
		cin >> choise;
		switch (choise) {
		case 1: {
			cout << file_format(str) << std::endl;
			break;
		}
		case 2: {
			cout << file_name(str);
			cout << std::endl;
			break;
		}
		case 3: {
			cout << file_path(str);
			cout << std::endl;
			break;
		}
		case 4: {
			file_disk(str);
			cout << std::endl;
			break;
		}
		case 5: {
			file_rename(&str);
			break;
		}
		case 6: {
			file_copy(str);
			break;
		}
		default: {
			return 0;
		}
		}
	}
	return 0;
}