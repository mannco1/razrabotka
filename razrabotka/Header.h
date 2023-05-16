#include <iostream>
#include <cmath>
using namespace std;
class solver{

public:
    void SolveEquation(double a, double b, double c);
};


class type1 {
public:
    void Get_answer();
    void show();
};

class type2 {
private:
    double A;
public:
    type2(double a1);
    void Get_answer();
    void show();
};

class type3 {
private:
    double C;
public:
    type3(double c1);
    void Get_answer();
    void show();
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1);
    void Get_answer();
    void show();
    void Get_answer_podbor();
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1);
    void Get_answer();
    void show();
    void Get_answer_podbor();
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1);
    void Get_answer();
    void show();
    void Get_answer_podbor();
};

class type7 {
private:
    double B;
public:
    type7(double b1);
    void Get_answer();
    void show();
};

class type8 {
private:
    double A, B;
public:
    type8(double a1, double b1);
    void Get_answer();
    void show();
    void Get_answer_podbor();
};
