#pragma once
class PT
{
public:
    double firstLenght;
    double secondLenght;
    int n;
    void static Vvod(int n, PT* pt);
    void static Vivod(PT* pt);
    void static Perc(PT* pt, int i);
    //void Start()
    //{
    //    cout << "������� ���������� ������������� �������������\n";
    //    cin >> n;
    //    //PT* pt = new PT[n];
    //}
  
    /* 
        cout << "������� ����� ������ ������� �������������� ������������\n";
        cin >> PT[1];
        cout << "������� ����� ������ ������� �������������� ������������\n";
        cin >> PT::secondLenght;
        return 0;
    }*/
};