#include <cmath>
#include<iostream>
#include<fstream>
#include<fstream>
#include<Windows.h>
#include<iomanip>
using namespace std;

void File()
{
    cout << "Введите числа" << endl;
    ofstream F("file.txt");
    double numbers[10];

    for (int i = 0; i < 10; ++i)
        cin >> numbers[i];

    if (F)
    {

        for (int i = 0; i < 10; i++)
        {
            F << numbers[i] << " ";
        }
    }
    else
        cout << "Файл не существует" << endl;
    F.close();

    ifstream Fq;
    Fq.open("file.txt");
    double sum = 0;
    double q = 0;
    for (int i = 0; i < 10; i++)
    {

        if (!Fq.eof())
        {
            Fq >> q;
            sum += q;
        }
        else
        {
            cout << "Файл не существует" << endl;
            break;
        }

    }
    Fq.close();
    cout << endl << "Ваше число = " << sum << endl;


}

double SignX(double x)
{
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    else if (x < -1)
        return -1;
    else
        return 0;
}

double Pramygol(double x)
{
    double a, b;
    cout << "Введите длину и ширину прямоугольника" << endl;
    cin >> a >> b;
    if (a > 0 && b > 0)
        return x = a * b;
    else
    {
        cout << "Не верные данные" << endl;
        return 0;
    }
}

double Treyg(double x)
{
    double a, b;
    cout << "Введите основание и высоту треугольника" << endl;
    cin >> a >> b;
    if (a > 0 && b > 0)
        return x = 0.5 * a * b;
    else
    {
        cout << "Не верные данные" << endl;
        return 0;
    }
}

double Kryg(double x)
{
    double a;
    cout << "Введите радиус круга" << endl;
    cin >> a;
    if (a > 0)
        return x = a * a * 3.14;
    else
    {
        cout << "Не верные данные" << endl;
        return 0;
    }
}

void Flag()
{
    for (int i = 1; i <= 13; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            if (i < 5 && j < 13)
            {
                cout << "*";
            }
            else
                cout << "_";
        }
        cout << endl;
    }
}

void Sin()
{
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    SelectObject(hDC, Pen);
    MoveToEx(hDC, 0, 85, NULL);
    LineTo(hDC, 200, 85);
    MoveToEx(hDC, 100, 0, NULL);
    LineTo(hDC, 100, 170);
    for (float x = -8.0f; x <= 8.0f; x += 0.01f)
    {
        MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);
        LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
    }
    ReleaseDC(hWnd, hDC);
    cin.get();
}

double Rim(double sum = 0)
{
    string y;
    cout << "Введите римское число" << endl;
    cin >> y;
    int i = 0;
    for (const char c : y)
    {
        switch (c)
        {

        case 'I':
            if (y[i + 1] == 'V' || y[i + 1] == 'X')
            {
                sum -= 1;
            }
            else
            {
                sum += 1;
            }
            i++;
            break;
        case 'V':
            sum += 5;
            i++;
            break;
        case 'X':
            if (y[i + 1] == 'L')
            {
                sum -= 10;
            }
            else
            {
                sum += 10;
            }
            i++;
            break;
        case 'L':
            sum += 50;
            i++;
            break;
        case 'C':
            if (y[i + 1] == 'D' || y[i + 1] == 'M')
            {
                sum -= 100;
            }
            else
            {
                sum += 100;
            }
            i++;
            break;
        case 'D':
            sum += 500;
            i++;
            break;
        case 'M':
            sum += 1000;
            i++;
            break;
        default:
            i++;
            break;
        }

    }
    return sum;
}

void Random()
{
    int s{}, m{}, b{}, c{};
    cout << "Введите числа m, b и c " << endl;
    cin >> m >> b >> c;
    for (int i = 0; i < 11; i++)
    {
        s = (m * s + b) % c;
        cout << "Рандомное число = " << s << endl;

    }


    cout << "Введите числа m, b и c " << endl;
    cin >> m >> b >> c;
    for (int i = 0; i < 11; i++)
    {
        s = (m * s + b) % c;
        cout << "Рандомное число = " << s << endl;

    }

}

void Matrix()
{
    double matrix1[3][4]
    {
    {5, 2, 0, 10},
    {3, 5, 2, 5},
    {20, 0, 0, 0}
    },
        matrix2[4][2]
    {
    {1.20, 0.50},
    {2.80, 0.40},
    {5.00, 1.00},
    {2.00, 1.50}
    },
        matrix3[3][2],
        result = 0,
        maxIncome = 0,
        minIncome = 100000000,
        totalIncome = 0,
        maxComission = 0,
        minComission = 100000000,
        totalComission = 0,
        totalMoney = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                result += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = result;
            if (j == 0)
            {
                if (result > maxIncome)
                {
                    maxIncome = result;
                }
                if (result < minIncome)
                {
                    minIncome = result;
                }
                totalIncome += result;
            }
            if (j == 1)
            {
                if (result > maxComission)
                {
                    maxComission = result;
                }
                if (result < minComission)
                {
                    minComission = result;
                }
                totalComission += result;
            }
            totalMoney += result;
            result = 0;
            cout << setw(5) << matrix3[i][j] << " ";
        }
        cout << endl;
    }

    cout << "max income: " << maxIncome << endl;
    cout << "min income: " << minIncome << endl;
    cout << "max comission: " << maxComission << endl;
    cout << "min comission: " << minComission << endl;
    cout << "total income: " << totalIncome << endl;
    cout << "total comission: " << totalComission << endl;
    cout << "total money: " << totalMoney << endl;
}

void Sisch()
{
    string chislo, result;
    int osnova_1, osnova_2;
    int chislo10Sis = 0;
    int a;
    char b;
    cout << "Введите число" << endl;
    cin >> chislo;
    cout << "Введите исходнуе систему счисления и новую \n";
    cin >> osnova_1 >> osnova_2;
    int i = chislo.size() - 1;

    for (const char c : chislo)
    {
        switch (c)
        {
        case '0':
            chislo10Sis += 0 * pow(osnova_1, i);

            break;
        case '1':
            chislo10Sis += 1 * pow(osnova_1, i);

            break;
        case '2':
            chislo10Sis += 2 * pow(osnova_1, i);

            break;
        case '3':
            chislo10Sis += 3 * pow(osnova_1, i);

            break;
        case '4':
            chislo10Sis += 4 * pow(osnova_1, i);

            break;
        case '5':
            chislo10Sis += 5 * pow(osnova_1, i);

            break;
        case '6':
            chislo10Sis += 6 * pow(osnova_1, i);

            break;
        case '7':
            chislo10Sis += 7 * pow(osnova_1, i);

            break;
        case '8':
            chislo10Sis += 8 * pow(osnova_1, i);

            break;
        case '9':
            chislo10Sis += 9 * pow(osnova_1, i);

            break;
        case 'A':
            chislo10Sis += 10 * pow(osnova_1, i);

            break;
        case 'B':
            chislo10Sis += 11 * pow(osnova_1, i);

            break;
        case 'C':
            chislo10Sis += 12 * pow(osnova_1, i);

            break;
        case 'D':
            chislo10Sis += 13 * pow(osnova_1, i);

            break;
        case 'E':
            chislo10Sis += 14 * pow(osnova_1, i);

            break;
        case 'F':
            chislo10Sis += 15 * pow(osnova_1, i);

            break;
        default:
            break;
        }
        i--;
    }
    i = 0;
    while (chislo10Sis != 0)
    {
        a = chislo10Sis % osnova_2;
        chislo10Sis = chislo10Sis / osnova_2;

        if (a > 9)
        {
            switch (a)
            {
            case 10:
                b = 'A';
                break;
            case 11:
                b = 'B';
            case 12:
                b = 'C';
                break;
            case 13:
                b = 'D';
                break;
            case 14:
                b = 'E';
                break;
            case 15:
                b = 'F';
                break;
            default:
                break;
            }
        }
        else
        {
            b = a + '0';
        }
        result += b;

    }
    for (i = result.length() - 1; i >= 0; i--)
    {
        cout << result[i];
    }

}

int main()
{
    setlocale(LC_ALL, "Rus");
    double x = 0;
    string y;

    cout << "5 ЗАДАНИЕ" << endl;
    Sin();                                                        // 5 ЗАДАНИЕ



   // cout << "1 ЗАДАНИЕ" << endl;
   // File();                                                            // 1 ЗАДАНИЕ

   // cout << "2 ЗАДАНИЕ" << endl;
   // cout << "Введите число" << endl;                                    // 2 ЗАДАНИЕ
   // cin >> x;
   // cout << "Знак числа \t"<< SignX(x) << endl;                        

   // cout << "3 ЗАДАНИЕ" << endl;
   //cout << "Площадь прямоугольника \t" << Pramygol(x) << endl;         // 3 ЗАДАНИЕ

   //cout << "Площадь треугольника \t" << Treyg(x) << endl;

   //cout << "Площадь круга \t" << Kryg(x) << endl;                      

   //cout << "4 ЗАДАНИЕ" << endl;
   //Flag();                                                         // 4 ЗАДАНИЕ



   // cout << "6 ЗАДАНИЕ" << endl;
   //cout << "Ваше число \t" << Rim(x) << endl;                    // 6 ЗАДАНИЕ

   // cout << "7 ЗАДАНИЕ" << endl;
   // Random();                                                 // 7 ЗАДАНИЕ

   // cout << "8 ЗАДАНИЕ" << endl;
   // Matrix();                                                    // 8 ЗАДАНИЕ

   // cout << "9 ЗАДАНИЕ" << endl;
   // Sisch();                                                     // 9 ЗАДАНИЕ





}