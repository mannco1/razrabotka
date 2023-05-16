#include <iostream>
#include <cmath>
#include"Header.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    




    
        int choice;

        // Бесконечный цикл для отображения интерфейса
        while (true) {
            // Выводим меню на экран
            std::cout << "Меню:" << std::endl;
            std::cout << "1. Опция 1" << std::endl;
            std::cout << "2. Опция 2" << std::endl;
            std::cout << "3. Выход" << std::endl;
            std::cout << "Выберите опцию: ";

            // Считываем выбор пользователя
            std::cin >> choice;

            // Обработка выбора
            switch (choice) {
            case 1:
                std::cout << "1.Таблица вариантов квадратных уравнений" << std::endl;

                break;
            case 2:
                std::cout << "Вы выбрали опцию 2." << std::endl;
                break;
            case 3:
                std::cout << "Выход из программы." << std::endl;
                return 0;
            default:
                std::cout << "Неверный выбор. Попробуйте еще раз." << std::endl;
                break;
            }

            // Очищаем буфер ввода перед новым вводом
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
        }

        return 0;
    }
