#include<iostream>
#include<fstream>
#include<Windows.h>
#include<fstream>
#include<cmath>
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

int main()
{
    setlocale(LC_ALL, "Rus");
    /*NOD_1();*/
    /*NOD_2();*/
    /*eratos();*/
 
    ifstream F("D:\\txt.txt");
    if (!F)
    {
        cout << "ошибка открытия файла" << endl;
    }
    string text((istreambuf_iterator<char>(F)), istreambuf_iterator<char>());
    F.close();
    string longWord = Filter_max(text);

    cout << "Самое длинное слово: " << longWord << endl;


}