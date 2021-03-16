#include <iostream>
#include "calcApp.h"

int main()
{
    int a, b;
    std::cout << "Program sluzy do mnozenia dwoch liczb calkowitych\n";
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;
    int result = multiply(a, b);
    std::cout << "Wynik mnozenia podanych liczb to: " << result;
}
