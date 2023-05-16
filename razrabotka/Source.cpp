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
    std::cout << "�� ���������� �� ������ 1." << std::endl;
    // ������ ������ 1

    while (true) {
        std::cout << "�������� ��������:" << std::endl;
        std::cout << "1. �������� ��� ���������" << std::endl;
        std::cout << "2. ���������������(Alfa-test)" << std::endl;
        std::cout << "3. ������� �� ������� 2" << std::endl;
        std::cout << "4. �����" << std::endl;
        std::cout << "�����: ";

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
            std::cout << "����� �� ���������." << std::endl;
            return;
        }
        else {
            std::cout << "�������� �����. ���������� ��� ���." << std::endl;
        }
    }
}

void Level2() {
    std::cout << "�� ���������� �� ������ 2." << std::endl;
    // ������ ������ 2

    while (true) {
        std::cout << "�������� ��������:" << std::endl;
        std::cout << "1. ������� �� ������� 3" << std::endl;
        std::cout << "2. ��������� �� ������� 1" << std::endl;
        std::cout << "3. �����" << std::endl;
        std::cout << "�����: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Level3();
        }
        else if (choice == 2) {
            return;
        }
        else if (choice == 3) {
            std::cout << "����� �� ���������." << std::endl;
            return;
        }
        else {
            std::cout << "�������� �����. ���������� ��� ���." << std::endl;
        }
    }
}

void Level3() {
    std::cout << "�� ���������� �� ������ 3." << std::endl;
    // ������ ������ 3

    while (true) {
        std::cout << "�������� ��������:" << std::endl;
        std::cout << "1. ��������� �� ������� 2" << std::endl;
        std::cout << "2. �����" << std::endl;
        std::cout << "�����: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            return;
        }
        else if (choice == 2) {
            std::cout << "����� �� ���������." << std::endl;
            return;
        }
        else {
            std::cout << "�������� �����. ���������� ��� ���." << std::endl;
        }
    }
}














     void type1::Get_answer() {
        cout << "������� �������� ����� �������� �" << endl;
    }
        void type1::show() {
        cout << "��������� 0 = 0" << endl;
    }



    type2::type2(double a1) {
        A = a1;
    }
    void type2::Get_answer() {
        cout << "������� �������� � = 0" << endl;
    }
    void type2::show() {
        cout << "��������� " << A << "*x^2 = 0" << endl;
    }



   type3::type3(double c1) {
        C = c1;
    }
    void type3::Get_answer() {
        cout << "������ ���" << endl;
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
            cout << "����� ���������: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
        else {
            cout << "������ ���" << endl;
        }
    }
    void type4::show() {
        cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
    }
    void type4::Get_answer_podbor() {
        if ((((-1) * C) / A) < 0) {
            cout << "������ ������� ������� ���" << endl;
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
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }



    type5::type5(double b1, double c1) {
        B = b1;
        C = c1;
    }
    void type5::Get_answer() {
        cout << "������ ���������: " << (-1) * (C / B) << endl;
    }
    void type5::show() {
        cout << "��������� " << B << "*x + " << C << " = 0" << endl;
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
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }


    
    type6::type6(double a1, double b1, double c1) {
        A = a1;
        B = b1;
        C = c1;
    }
    void type6::Get_answer() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
        }
        else {
            if (D == 0) {
                double x = ((-1) * B - sqrt(D)) / (2 * A);
                cout << "������ ���������: " << x << endl;
            }
            else {
                double x1 = ((-1) * B - sqrt(D)) / (2 * A);
                double x2 = ((-1) * B + sqrt(D)) / (2 * A);
                cout << "����� ���������: " << endl;
                cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
            }
        }
    }
    void type6::show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
    }
    void type6::Get_answer_podbor() {
        double D = B * B - 4 * A * C;
        if (D < 0) {
            cout << "��������� �� ����� �������������� ������" << endl;
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
            cout << "�����������, ���� �� ������ ���������: " << x << endl;
        }
    }



    type7::type7(double b1) {
        B = b1;
    }
    void type7::Get_answer() {
        cout << "������ ���������: x = 0" << endl;
    }
    void type7::show() {
        cout << "��������� " << B << "*x = 0" << endl;
    }


    
    type8::type8(double a1, double b1) {
        A = a1;
        B = b1;
    }
    void type8::Get_answer() {
        double x = ((-1) * B) / A;
        cout << "����� ���������: " << endl;
        cout << "X1 = 0" << endl << "X2 = " << x << endl;
    }
    void type8::show() {
        cout << "��������� " << A << "*x^2 + " << B << "*x = 0 " << endl;
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
        cout << "�����������, ���� �� ������ ���������: " << x << endl;
    }
