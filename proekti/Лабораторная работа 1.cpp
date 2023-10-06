#include<iostream>
#include<bitset>
using std::cout;
using std::cin;
int main()
{
    
    int a;
    int b;
    int d;
    double x;
    double c;
    int coord_nach;
    int coord_con;
    //Задание 1
    std::cout << "Zemliakov Artem Dmitrievich, 231-3213" << std::endl;
    //Задание 2 макс и мин значения
    cout << "short size = " << sizeof(short) << " min = " << short(0b1000000000000000) << " max = " << short(0b0111111111111111) << std::endl;
    cout << "int size = " << sizeof(int) << " min = " << int(0b10000000000000000000000000000000) << " max = " << int(0b01111111111111111111111111111111) << std::endl;
    cout << "unsigned int size = " << sizeof(unsigned int) << " min = " << unsigned int(0b00000000000000000000000000000000) << "max = " << unsigned int(0b11111111111111111111111111111111) << std::endl;
    cout << "unsigned short size" << sizeof(unsigned short) << " min = " << unsigned short(0b0000000000000000) << " max = " << unsigned short(0b1111111111111111) << std::endl;
    cout << "long size = " << sizeof(long) << " min = " << long(0b10000000000000000000000000000000) << " max = " << long(0b01111111111111111111111111111111) << std::endl;
    cout << "lonh long size = " << sizeof(long long) << " min = " << long long(0b1000000000000000000000000000000000000000000000000000000000000000) << " max = " << long long(0b0111111111111111111111111111111111111111111111111111111111111111) << std::endl;
    cout << "double size = " << sizeof(double) << " min = " << double(0b0000000000000000000000000000000000000000000000000000000000000000) << " max = " << double(0b1111111111111111111111111111111111111111111111111111111111111111) << std::endl;
    cout << "char size =  " << sizeof(char) << " min = " << char(0b00000000) << " max = " << char(0b11111111) << std::endl;
    cout << "bool size = " << sizeof(bool) << " min = " << bool(0b00000000) << " max = " << bool(0b11111111) << std::endl;
    setlocale(LC_ALL, "Russian");
    //Задание 3
    cout << "Введите число" << std::endl;
    cin >> d;
    cout << "В бинарном виде " << std::bitset<8 * sizeof(d)>(d) << std::endl;
    cout << "В шестнадцатиричном виде " << std::hex << d << std::dec << std::endl;
    cout << "В логическом виде  " << bool(d) << std::endl;
    cout << "double " << double(d) << std::endl;
    cout << "char" << char(d) << std::endl;
    //Задание 4 
    cout << "Введите числа" << std::endl;
    cin >> a >> b;
    x = double(b) / double(a);
    cout << "Неизвестная переменная = " << x << std::endl; \
        //Задание 5
        cout << "Введите координаты концов отрезка" << std::endl;
    cin >> coord_nach >> coord_con;
    c = coord_nach + double(coord_con - coord_nach) / 2;
    cout << "Середина отрезка = " << c << std::endl;





    return 0;
}