#include <cmath>
#include<iostream>
#include<fstream>
#include<fstream>

using namespace std;

double Zaem()
{
    double S, p, n, r, m;
    cout << "Введите значения S p n \n";
    cin >> S >> p >> n;
    if ((S > 0) && (p > 0) && (n > 0))
    {
        r = p / 100;
        m = (((S * r) * pow(1 + r, n))) / (12 * ((pow(1 + r, n) - 1)));
        return m;

    }
    else
    {
        cout << "Не вверные данные";
        return -1;
    }
}

double Procent()
{
    double S, p, n, r, m;
    double a{};
    cout << "Введите значения S m n \n";
    cin >> S >> m >> n;
    if ((S > 0) && (m > 0) && (n > 0))
    {
        for (double p = 0.00001; p < 100; p += 0.00001)
        {
            if (a < m)
            {
                r = p / 100;
                a = (((S * r) * pow(1 + r, n))) / (12 * ((pow(1 + r, n) - 1)));
            }
            else if (a >= m) {
                return p;
                break;
            }
        }
    }
    else return 0;
}

void Filereader(string a)
{
    string q;
    ifstream F;
    F.open(a);
    if (F)
    {
        while (!F.eof())
        {
            F >> q;
            cout << q;
        }
    }
    else
        cout << "Файл не существует" << endl;

    F.close();
}

void Filter(string a)
{
    int q;
    ifstream F;
    F.open(a);
    if (F)
    {
        while (!F.eof())
        {
            if (F >> q)
            {

                cout << q;
            }
            else
            {
                F.clear();
                F.ignore(1, ' ');
            }
        }
    }
    else
        cout << "Файл не существует" << endl;

    F.close();
}



void Bubble(string a)
{

    char buff[30];
    ifstream F(a);
    F.getline(buff, 30);
    F.close();

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30 - i - 1; j++)
        {
            if (buff[j] > buff[j + 1])
                swap(buff[j], buff[j + 1]);
        }

    }
    for (int i = 0; i < 30; i++)
    {
        cout << buff[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Zaem();
    Procent();
    Filereader("Filereader");
    Filter("D:\\txt.txt");
    Bubble("D:\\txt.txt");
}