#include <iostream>
#include <cmath>
#include "PT.h"

using namespace std;
void PT::Vvod(int n, PT* pt) {

    for (int i = 0; i < n; i++) {
        double first, second;
        cout << "������� ������ ��������" << endl;
        cin >> first;
        cout << "������� ���������� ������������� �������������" << endl;
        cin >> second;
        //pt[i] = PT();
        pt[i].firstLenght = first;
        pt[i].secondLenght = second;
    }
}

void PT::Vivod(PT* pt) {
    int i;
    cout << "�������� �����������" << endl;
    cin >> i;
    i--;
    cout << pt[i].firstLenght << " ";
    cout << pt[i].secondLenght;
}

void PT::Perc(PT* pt, int i) {
    bool p, s;
    double a;
    cout << "�������� �������(0-������ | 1-������)" << endl;
    cin >> s;
    cout << "��������� ��� ��������� (0 ��� 1)" << endl;
    cin >> p;
     cout << "�� �������" << endl;
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