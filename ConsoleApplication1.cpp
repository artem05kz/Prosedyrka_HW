#include<cmath>
#include<iostream>
#include <string>
#include<set>
using namespace std;

void Spinner()
{
    int a, b, c, result{};
    cout << "Введите стоимость основания, одной лопасти и максимальную стоимость всего спиннера " << endl;
    cin >> a >> b >> c;
    if (a > c)
        return;
    for (int i = 0; c > (a + (b * i)); i++)
    {
        result = i;
    }
    cout << "Кол-во лопастей = " << result << endl;
}

void Spinner2()
{
    int m;
    cout << "Введите кол-во лопастей " << endl;
    cin >> m;
    if (m < 3)
    {
        cout << "0 0" << endl;
        return;
    }
    for (int i = 0; i < m; i++)
    {
        if ((m - (i * 3)) == 4)
        {
            printf("Трехлопастных = %d и Четырех Лопастных = 1 \n", i);
            return;
        }
        if ((m - (i * 4)) == 3)
        {
            printf("Трехлопастных = 1 и Четырех Лопастных = %d \n", i);
            return;
        }
        if ((m - (i * 3)) == 0)
        {
            printf("Трехлопастных = %d и Четырех Лопастных = 0 \n", i);
            return;
        }
        if ((m - (i * 4)) == 0)
        {
            printf("Трехлопастных = 0 и Четырех Лопастных = %d \n", i);
            return;
        }
    }
    cout << "0 0" << endl;
}

void Kvadrat()
{
    int n, m, result{ 0 };
    cout << "Введите размер листа" << endl;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result += (n - i) * (m - j);
        }
    }
    printf("Количество прямоугольников = %d \n", result);
}

void Vagon()
{
    int n, result{ 0 };
    cout << "Введите кол-во свободных мест" << endl;
    cin >> n;
    int* array = new int[n] {};

    if (0 > n || 54 < n)
    {
        cout << "Неправельные данные" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Введите номер свободного места \t");
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }

    }

    for (int i = 0; i < n - 3; i++)
    {
        if (array[i] == 1 || array[i] == 5 || array[i] == 9 || array[i] == 13 || array[i] == 17 || array[i] == 21 || array[i] == 25 || array[i] == 29 || array[i] == 33)
        {
            if ((1 + array[i]) == array[i + 1] && (2 + array[i]) == array[i + 2] && (3 + array[i]) == array[i + 3])
            {
                if ((54 - array[i] + array[i] / 2) && (54 - array[i] + array[i] / 2 + 1))
                {
                    result++;
                }
            }

            if (array[i] + 4 != array[i + 4])
            {
                break;
            }
        }

    }
    printf("Количество свободных подряд идущих купе = %d \n", result);
}

void Kino()
{
    system("chcp 1251 >> null");
    int N, K, left, right, i1 = 0, i2 = 0, sum = 0, max = 0;
    cout << "Введите количество мест N в ряду: ";
    cin >> N;
    cout << "Введите количество школьников К: ";
    cin >> K;
    int* a = new int[N + 2];
    a[0] = 8; a[N + 1] = 8; 
    for (int i = 1; i <= N; i++)
        a[i] = 0;
    while (K > 0)
    {
        for (int i = 0; i <= N + 1; i++)
        {
            if (a[i] == 0)
                sum = sum + 1;
            else
            {
                if (sum > max)
                {
                    i1 = i - 1 - sum;
                    i2 = i;
                    max = sum;
                }
                sum = 0;
            }
        }
        a[(i1 + i2) / 2] = 2;
        sum = 0;
        max = 0;
        K = K - 1;
    }

    a[(i1 + i2) / 2] = 3;
    left = (i1 + i2) / 2 - (i1 + 1);
    right = (i2 - 1) - (i1 + i2) / 2;
    cout << endl << "Слева: " << left << endl << "Справа: " << right << endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //Spinner();

    //Spinner2();

    //Kvadrat();

    //Vagon();

    //Kino();
}