#include <iostream>
#include <cmath>
#include"Header.h"
using namespace std;

void solver::SolveEquation(double a, double b, double c) {
    if (a != 0.0) {
        if (b * b - 4 * a * c >= 0) {
            type4 equation4(a, c);
            equation4.Get_answer();
            equation4.show();
        }
        else {
            type5 equation5(b, c);
            equation5.Get_answer();
            equation5.show();
        }
    }
    else {
        if (b != 0.0) {
            type8 equation8(b, c);
            equation8.Get_answer();
            equation8.show();
        }
        else {
            type3 equation3(c);
            equation3.Get_answer();
            equation3.show();
        }
    }
}






void Level1() {
    std::cout << "Вы находитесь на уровне 1." << std::endl;
    // Логика уровня 1

    while (true) {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Выберать тип уравнения" << std::endl;
        std::cout << "2. Автопоределения(Alfa-test)" << std::endl;
        std::cout << "3. Перейти на уровень 2" << std::endl;
        std::cout << "4. Выход" << std::endl;
        std::cout << "Выбор: ";

        int choice;
        std::cin >> choice;


        if (choice == 1) {
            Level2()
        }
        if (choice == 2) {
            
        }
        if (choice == 3) {
            Level2();
        }
        else if (choice == 4) {
            std::cout << "Выход из программы." << std::endl;
            return;
        }
        else {
            std::cout << "Неверный выбор. Попробуйте еще раз." << std::endl;
        }
    }
}

void Level2() {
    std::cout << "Вы находитесь на уровне 2." << std::endl;
    // Логика уровня 2

    while (true) {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Перейти на уровень 3" << std::endl;
        std::cout << "2. Вернуться на уровень 1" << std::endl;
        std::cout << "3. Выход" << std::endl;
        std::cout << "Выбор: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Level3();
        }
        else if (choice == 2) {
            return;
        }
        else if (choice == 3) {
            std::cout << "Выход из программы." << std::endl;
            return;
        }
        else {
            std::cout << "Неверный выбор. Попробуйте еще раз." << std::endl;
        }
    }
}

void Level3() {
    std::cout << "Вы находитесь на уровне 3." << std::endl;
    // Логика уровня 3

    while (true) {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Вернуться на уровень 2" << std::endl;
        std::cout << "2. Выход" << std::endl;
        std::cout << "Выбор: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            return;
        }
        else if (choice == 2) {
            std::cout << "Выход из программы." << std::endl;
            return;
        }
        else {
            std::cout << "Неверный выбор. Попробуйте еще раз." << std::endl;
        }
    }
}














     void type1::Get_answer() {
        cout << "Ответом является любое значение Х" << endl;
    }
        void type1::show() {
        cout << "Уравнение 0 = 0" << endl;
    }



    type2::type2(double a1) {
        A = a1;
    }
    void type2::Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void type2::show() {
        cout << "Уравнение " << A << "*x^2 = 0" << endl;
    }



   type3::type3(double c1) {
        C = c1;
    }
    void type3::Get_answer() {
        cout << "Корней нет" << endl;
    }
    void type3::show() {
        cout << C << " = 0" << endl;
    }



    type4::type4(double a1, double c1) {
        A = a1;
        C = c1;
    }
    void type4::Get_answer() {
        double k = ((-1) * C) / A;
        if (k >= 0) {
            double x1 = sqrt(k);
            double x2 = sqrt(k) * (-1);
            cout << "Корни уравнения: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "Корней нет" << endl;
        }
    }
    void type4::show() {
        cout << "Уравнение " << A << "*x^2 + " << C << " = 0" << endl;
    }
    void type4::Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "Корней методом подбора нет" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }



    type5::type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void type5::Get_answer() {
        cout << "Корень уравнения: " << (-1) * (C / B) << endl;
    }
    void type5::show() {
        cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
    }
    void type5::Get_answer_podbor() {
        double min = abs(0 - B * (-20) - C);
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            double temp = abs(0 - B * (i)-C);
            if (temp < min) {
                min = temp;
                x = i;
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }


    
    type6::type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void type6::Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "Корень уравнения: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "Корни уравнения: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void type6::show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void type6::Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "Уравнение не имеет действительных корней" << endl;
        }
        else {
            double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
            double x = -20;
            for (double i = -20; i < 20.01; i = i + 0.01) {
                double temp = abs(0 - A * (i) * (i)-B * i - C);
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
            cout << "Приближенно, один из корней уравнения: " << x << endl;
        }
    }



    type7::type7(double b1) {
        B = b1;
    }
    void type7::Get_answer() {
        cout << "Корень уравнения: x = 0" << endl;
    }
    void type7::show() {
        cout << "Уравнение " << B << "*x = 0" << endl;
    }


    
    type8::type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void type8::Get_answer() {
        double x = ((-1) * B) / A;
        cout << "Корни уравнения: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void type8::show() {
        cout << "Уравнение " << A << "*x^2 + " << B << "*x = 0 " << endl;
    }
    void type8::Get_answer_podbor() {
        double min = abs(0 - A * (-20) * (-20) - B * (-20));
        double x = -20;
        for (double i = -20; i < 20.01; i = i + 0.01) {
            if (i != 0) {
                double temp = abs(0 - A * i * i - B * (i));
                if (temp < min) {
                    min = temp;
                    x = i;
                }
            }
        }
        cout << "Приближенно, один из корней уравнения: " << x << endl;
    }
