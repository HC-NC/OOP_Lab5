#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    const int N = 10;

    float a[N];

    cout << "Введите " << N << " чисел:" << endl;

    for (int i = 0; i < N; i++)
        cin >> a[i];

    int k;

    cout << "Введите k (>=2): ";

    cin >> k;

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % k == 0)
            a[i] = 0;
        else
            count++;
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }

    cout << "\nКоличество оставшихся: " << count << endl;

    return 0;
}