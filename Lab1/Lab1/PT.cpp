#include <iostream>
#include <cmath>
#include "PT.h"

using namespace std;
void PT::Vvod(int n, PT* pt) {

    for (int i = 0; i < n; i++) {
        double first, second;
        cout << "Введите первую сторонув" << endl;
        cin >> first;
        cout << "Введите количество прямоугольных треугольников" << endl;
        cin >> second;
        //pt[i] = PT();
        pt[i].firstLenght = first;
        pt[i].secondLenght = second;
    }
}

void PT::Vivod(PT* pt) {
    int i;
    cout << "Выберите треугольник" << endl;
    cin >> i;
    i--;
    cout << pt[i].firstLenght << " ";
    cout << pt[i].secondLenght;
}

void PT::Perc(PT* pt, int i) {
    bool p, s;
    double a;
    cout << "Выберите сторону(0-первая | 1-вторая)" << endl;
    cin >> s;
    cout << "Уменьшить или увеличить (0 или 1)" << endl;
    cin >> p;
     cout << "На сколько" << endl;
    cin >> a;
    if (s)
    {
        if(p) {
            pt[i].secondLenght * (100+a)/100;
        }
        else
        {
            pt[i].secondLenght*  a / 100;
        }
    }
    else
    {
        if(p) {
            pt[i].firstLenght* (100 + a) / 100;
        }
        else
        {
            pt[i].firstLenght* a / 100;
        }
    }

}