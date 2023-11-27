Домашнее задание 2.


Задача «Конус».
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    double r, R, h, l, V, S;
    double pi = 3.14;


    cout << "Введите размер вверхнего основания конуса " << endl;
    cin >> r;
    cout << "Введите размер нижнего основания конуса " << endl;
    cin >> R;
    cout << "Введите размер высоты" << endl;
    cin >> h;

    if (r > 0 && R > 0 && h > 0)
    {
        l = sqrt(((R - r) * (R - r)) + (h * h));

        V = (pi * h * ((R * R) + (R * r) + (r * r))) / 3;
        S = pi * ((R * R) + ((R + r) * l) + (r * r));

        cout << "Объем усеченного конуса равен " << V << endl;
        cout << "Площадь усеченного конуса равен " << S << endl;
    }
    else
    {
        cout << "Вы ввели не верные данные";
    }
}

Задача «Разветвление»

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, a, w = 0;
    cout << "Напиши x и a" << endl;
    cin >> x >> a;

    if (abs(x) < 1 && x != 0)
    {
        w = a * log(abs(x));
        cout << w;
    }
    else if (abs(x) >= 1 && a >= x * x)
    {
        w = sqrt(a - (x * x));
        cout << w;
    }
    else if (a < x * x)
    {
        cout << "Нельзя найти корень из отрицательного числа";
    }
    else if (x == 0)
    {
        cout << "Нельзя логарифмировать 0";
    }

}

Задача «Функция»

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, b, z;
    cout << "Введите x y b " << endl;
    cin >> x >> y >> b;
    if (b - y > 0 && b - x > 0)
    {
        z = log(b - y) * sqrt(b - x);
        cout << z;
    }
    else if (b - y > 0 && b - x == 0)
    {
        z = log(b - y) * sqrt(b - x);
        cout << z;
    }
    else if (b - y <= 0)
    {
        cout << "Нельзя логарифмировать 0 или отрицательное число";
    }
    else if (b - x < 0)
    {
        cout << "Нельзя найти корень из отрицательного числа";
    }
}

Задача «Порядок».

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double N, x, y;
    cout << "Введите N" << endl;
    cin >> N;
    y = modf(N, &x);


    if ((y == 0) and (x > 0))
    {
        for (double i = N; i <= N + 10; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << "Число не натуральное";
    }

}

Задача «Табуляция»

#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double y;

    for (double x = -4; x <= 4; x += 0.5)
    {
        if (x - 1 != 0)
        {
            y = ((x * x) - (2 * x) + 2) / (x - 1);
            cout << y << endl;
        }
        else if (x - 1 == 0)
        {
            cout << "на ноль нельзя делить" << endl;
        }
    }
}

