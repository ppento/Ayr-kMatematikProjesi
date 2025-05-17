#include <iostream>
#include<locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int b, c;
    cout << "b değerini giriniz: ";
    cin >> b;
    cout << "c değerini giriniz: ";
    cin >> c;

    bool found = false;
    cout << "Tamsayı çözümlerden bazıları (x, y):" << endl;

    for (int y = -10; y <= 10; y++) {
        int numerator = c - b * y;
        if (numerator % 2 == 0) {
            int x = numerator / 2;
            cout << "(" << x << ", " << y << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Bu değerler için tamsayı çözüm bulunamadı." << endl;
    }

    return 0;
}
