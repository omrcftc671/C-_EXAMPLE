#include <iostream>
using namespace std;

int main() {
    int i, x;
    cout << "x'i gir: " << endl;
    cin >> x;

    for (i = 0; i <= x; i = i + 1) {
        if (i % 3 != 0)
            continue;
        if (i % 5 == 0 || i % 7 == 0)
            continue;
        cout << "sayilar: " << i << endl;
    }

    system("PAUSE");
    return 0;
}
