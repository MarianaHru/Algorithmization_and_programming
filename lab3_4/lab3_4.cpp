#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y; // координати точки
    double R;    // радіус

    cout << "Введіть координати точки (x, y): " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "Введіть радіус R: ";
    cin >> R;

    // Перевірка, чи знаходиться точка в квадраті
    bool inSquare = (x >= -R && x <= R && y >= -R && y <= R);

    bool inCircle1 = (x + R) * (x + R) + (y - R) * (y - R) <= R * R;
    bool inCircle2 = (x - R) * (x - R) + (y + R) * (y + R) <= R * R;

    // Якщо точка знаходиться в квадраті або в одній з окружностей
    if (inSquare || inCircle1 || inCircle2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
