#include <iostream>
using namespace std;
int main() {
    long long n;
    cout << "Введите число n: ";
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
        cout << "NO";
    else {
        cout << "YES" << endl;
        auto tarelki = (long long*)malloc(sizeof(long long) * n);
        for (long long i = 0; i < n; i++)
            tarelki[i] = i + 1;
        if (n % 4 == 0) {
            cout << "Кол-во тарелок Пети: " << (n / 2) << endl;
            cout << "Граммовки тарелок Пети: ";
            for (long long i = 0; i < (n / 2); i = i + 2) {
                cout << tarelki[i] << " " << tarelki[n - i - 1] << " ";
            }
            cout << endl << "Кол-во тарелок Маши: " << (n / 2) << endl;
            cout << "Граммовки тарелок Маши: ";
            for (long long i = 1; i < (n / 2); i = i + 2) {
                cout << tarelki[i] << " " << tarelki[n - i - 1] << " ";
            }
        }
        else if (n % 4 == 3) {
            cout << "Кол-во тарелок Пети: " << (n / 2 + 1) << endl;
            cout << "Граммовки тарелок Пети: ";
            for (long long i = 0; i < (n / 2); i = i + 2) {
                cout << tarelki[i] << " " << tarelki[n - i - 2] << " ";
            }
            cout << endl << "Кол-во тарелок Маши: " << (n / 2) << endl;
            cout << "Граммовки тарелок Маши: ";
            for (long long i = 1; i < (n / 2); i = i + 2) {
                cout << tarelki[i] << " " << tarelki[n - i - 2] << " ";
            }
            cout << n;
        }
    }
}