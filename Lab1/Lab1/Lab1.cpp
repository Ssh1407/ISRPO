#include <iostream>
//#include <cmath>
#include "PT.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a, i;
    cout << "Введите количество прямоугольных треугольников"<<endl;
    cin >> n;
    PT* pt = new PT[n];
    PT::Vvod(n, pt);
    PT::Vivod(pt);
    while (true)
    {
        cout << "1" << endl;
        cout << "2" << endl;
        cout << "3" << endl;
        cout << "4" << endl;
        cout << "Выход" << endl;
        cin >> a;
        cout << "Выберите треугольник" << endl;
        cin >> i;
        switch (b)
        {
        case 1:
            PT::Perc(pt, i);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            break;
        }
    }
}

