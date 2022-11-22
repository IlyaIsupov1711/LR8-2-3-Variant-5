#include <iostream>
#include <windows.h>
#include <string>

class DetSad
{
public:
    int number, child, cost;
    char region[20];

    DetSad()
    {
        number = child = cost = 0;
    }

    void GetDetSad(char str[])
    {
        if (!strcmp(region, str))
        {
            std::cout << "Регион: " << region << std::endl;
            std::cout << "Номер: " << number << std::endl;
            std::cout << "Колличество детей: " << child << std::endl;
            std::cout << "Стоимость в месяц: " << cost << std::endl;
            std::cout << " " << std::endl;
        }
    }

    void PutDetSad()
    {
        std::cout << "Введите номер сада: "; std::cin >> number;
        std::cout << "Введите колличество детей: "; std::cin >> child;
        std::cout << "Регион: "; std::cin >> region;
        std::cout << "Оплата: "; std::cin >> cost;
        std::cout << " " << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");
    DetSad array[100];
    for (int i = 0; i < 3; i++)
    {
        array[i].PutDetSad();
    }
    char find[20];
    std::cout << "Введите регион для поиска: ";
    std::cin >> find;
    std::cout << " " << std::endl;
    int col = 0;
    for (int i = 0; i < 3; i++)
    {
        array[i].GetDetSad(find);
        col++;
    }
    if (col == 0)
    {
        printf("Такого района нет!");
    }
}