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
    //    cout << "¬ведите количество пр€моугольных треугольников\n";
    //    cin >> n;
    //    //PT* pt = new PT[n];
    //}
  
    /* 
        cout << "¬ведите длину первой стороны пр€моугольного треугольника\n";
        cin >> PT[1];
        cout << "¬ведите длину первой стороны пр€моугольного треугольника\n";
        cin >> PT::secondLenght;
        return 0;
    }*/
};