// Lab_03_4.cpp
// Головенко Костянтин
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R; //вхідні дані

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if (((y >= 0) && (x <= 0) && (y * y <= R * R - x * x)) || ((y <= 0) && (y >= -R) && (x >= y / -2) && (x <= y / 2 + R)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

