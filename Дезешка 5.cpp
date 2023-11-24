#include<Windows.h>
#include<fstream>
#include<cmath>
#include<iostream>
#include <string>

using namespace std;

void NOD_1()
{
    int a{}, b{}, c{}, i_1{}, i_2{};
    cout << endl << "Введите два числа" << endl;
    cin >> a >> b;
    i_1 = a;
    i_2 = b;
    if (a == b)
    {
        printf("НОД ЧИСЕЛ %d и  %d:\t %d", i_1, i_2, a);
    }
    else
    {
        while (c == 0)
        {
            if (a != 0 && b != 0)
            {
                if (a > b)
                {
                    a = a % b;
                }
                else if (b > a)
                {
                    b = b % a;
                }
                if (a == 0 || b == 0)
                {
                    c = a + b;
                    printf("НОД ЧИСЕЛ %d и  %d:\t %d", i_1, i_2, c);
                    break;
                }
            }
            else
            {
                cout << "Введены не верные числа" << endl;
                break;
            }
        }
    }

}

void NOD_2()
{
    int a{}, b{}, c{}, i_1{}, i_2{};
    cout << endl << "Введите два числа" << endl;
    cin >> a >> b;
    i_1 = a;
    i_2 = b;

    if (a == b)
    {
        printf("НОД ЧИСЕЛ %d и  %d:\t %d", i_1, i_2, a);
    }
    else
    {
        while (c == 0)
        {
            if (a != 0 && b != 0)
            {
                if (a >= b)
                {
                    a = a - b;
                }
                else if (b >= a)
                {
                    b = b - a;
                }
                if (a == 0 || b == 0)
                {
                    c = a + b;
                    printf("НОД ЧИСЕЛ %d и  %d:\t %d", i_1, i_2, c);
                    break;
                }
            }
            else
            {
                cout << "Введены не верные числа";
                break;
            }
        }
    }
}



void eratos()
{
    int n;
    cout << "Введите число" << endl;
    cin >> n;
    int* a = new int[n + 1];

    for (int i = 0; i < n + 1; i++)
        a[i] = i;

    for (int m = 2; m < n + 1; m++)
    {
        if (a[m] != 0)
        {
            cout << a[m] << endl;
            for (int j = m * m; j < n + 1; j += m)
                a[j] = 0;
        }
    }

}

string Filter_max(string text)
{
    string result;
    string word;
    for (char c : text)
    {
        if (c != ' ')
        {
            word += c;
        }
        else
        {
            if (word.length() > result.length())
            {
                result = word;
            }
            word = "";
        }
    }
    if (word.length() > result.length())
    {
        result = word;
    }
    return result;
}

string Filter_min(string text)
{
    string result;
    string word;
    for (char c : text)
    {
        if (c != ' ')
        {
            word += c;
        }
        else if (word.length() == 1)
        {
            result = word;
            return result;
        }
        else
        {
            if (word.length() < result.length())
            {
                result = word;
            }
            word = "";
        }
    }
    if (word.length() < result.length())
    {
        result = word;
    }
    return result;
}

string DvaChetiri(string chislo, int osnova_2)
{
    string result;
    int osnova_1{ 2 };
    int chislo10Sis = 0;
    int a;
    char b;

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
    string da = "";
    for (i = result.length() - 1; i >= 0; i--)
    {
        da += result[i];
    }
    return da;
}

void Find3()
{
    int result, n, a;
    cout << "Введите число n" << endl;
    cin >> n;
    n *= n;
    a = n;
    while (n != 0)
    {
        if (n > 9)
        {
            result = n % 10;
            n /= 10;

            if (result == 3)
            {
                cout << "Цифра 3 есть в числе " << a << endl;
                break;

            }
        }
        else
        {
            if (n == 3)
            {
                cout << "Цифра 3 есть в числе " << a << endl;
                break;
            }
            else
            {
                cout << "Цифры 3 нет в числе " << a << endl;
                break;
            }
        }

    }

}

int main()
{
    setlocale(LC_ALL, "Rus");

    /*NOD_1();*/
    /*NOD_2();*/
    /*eratos();*/

    /*ifstream F("D:\\txt.txt");
    if (!F)
    {
        cout << "ошибка открытия файла" << endl;
    }
    string text((istreambuf_iterator<char>(F)), istreambuf_iterator<char>());
    F.close();

    string longWord = Filter_max(text);111
    cout << "Самое длинное слово: " << longWord << endl;

    string minWord = Filter_min(text);
    cout << "Самое короткое слово: " << minWord << endl;*/

    /*string da, ad;
    int sizeArr;
    cout << "Введите размер массива" << endl;
    cin >> sizeArr;

    int* arrInt{ new int[sizeArr] {} };
    for (int j = 1; j <= sizeArr; j++)
    {
        printf("Введите %d число \n", j);
        cin >> arrInt[j - 1];
    }

    for (int i = 0; i < sizeArr; i++)
    {
        da = DvaChetiri(to_string(arrInt[i]), 4);
        ad = DvaChetiri(to_string(arrInt[i]), 3);
        printf("Число %d в 4-ной системе равно %d \t Число %d в 3-ной системе равно %d \n", arrInt[i], stoi(da), arrInt[i], stoi(ad));
    }*/

    Find3();
}