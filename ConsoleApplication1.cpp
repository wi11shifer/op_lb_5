#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, c, a;
    cout << "Введіть ціле число в діапазоні 100–999: ";
    cin >> x;

    switch (x / 100)
    {
    case 1: cout << "Сто "; break;
    case 2: cout << "Двісті "; break;
    case 3: cout << "Триста "; break;
    case 4: cout << "Чотириста "; break;
    case 5: cout << "П'ятсот "; break;
    case 6: cout << "Шістост "; break;
    case 7: cout << "Сімсот "; break;
    case 8: cout << "Вісімсот "; break;
    case 9: cout << "Дев'ятсот "; break;
    }
    c = (x / 100) * 100;
    a = x - c;
    switch (a)
    {
    case 11: cout << "одинадцять \n"; break;
    case 12: cout << "дванадцять \n"; break;
    case 13: cout << "тринадцять \n"; break;
    case 14: cout << "чотирнадцять \n"; break;
    case 15: cout << "п'ятнадцять \n"; break;
    case 16: cout << "шістнадцять \n"; break;
    case 17: cout << "сімнадцять \n"; break;
    case 18: cout << "вісімнадцять \n"; break;
    case 19: cout << "дев'ятнадцять \n"; break;
    default:switch ((x / 10) % 10)
    {
    case 1: cout << "десять "; break;
    case 2: cout << "двадцять "; break;
    case 3: cout << "тридцять "; break;
    case 4: cout << "сорок "; break;
    case 5: cout << "п'ятдесят "; break;
    case 6: cout << "шістдесят "; break;
    case 7: cout << "сімсдесят "; break;
    case 8: cout << "вісімдесят "; break;
    case 9: cout << "дев'яносто "; break;
    }
           switch (x % 10)
           {
           case 1: cout << "один\n"; break;
           case 2: cout << "два\n"; break;
           case 3: cout << "три\n"; break;
           case 4: cout << "чотири\n"; break;
           case 5: cout << "п'ять\n"; break;
           case 6: cout << "шість\n"; break;
           case 7: cout << "сім\n"; break;
           case 8: cout << "вісім\n"; break;
           case 9: cout << "дев'ять\n"; break;
           };
    }


}