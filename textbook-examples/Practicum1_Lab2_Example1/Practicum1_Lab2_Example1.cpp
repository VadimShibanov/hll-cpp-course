#include <iostream>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_CTYPE, "Russian");
    float zp, hp, kh;

    std::cout << "Почасовая оплата>";
    std::cin >> hp;
    std::cout << "Количество часов>";
    std::cin >> kh;

    if (kh > 40) zp = hp * 40 + 1.5 * hp * (kh - 40);
    else zp = hp * kh;
    std::cout << "Зарплата = " << zp << std::endl;

    return 0;
}