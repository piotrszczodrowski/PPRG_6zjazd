#include <iostream>

using namespace std;

int main() {
    cout << "Program obliczy ilosc liczb naturalnych podzielnych przez 5, ale niepodzielnych przez 3 w przedziale (0,n). Podaj n: ";
    int n = 0;
    cin >> n;
    while ( n <= 0) {
        cout << "Podana wartosc jest nieprawidlowa. Parametr n musi byc liczba naturalna dodatnia! Podaj n: ";
        cin >> n;
    }
    int licznik = 0;
    for (int i = 1; i <= n; i++) {
        if (( i % 5 == 0 ) && ( i % 3 != 0)) {
            licznik++;
        }
    }
    cout << "W badanym zakresie wystepuje " << licznik << " liczb naturalnych podzielnych przez 5 i niepodzielnych przez 3.";
    // formuła matematyczna zwracająca ten sam wynik
    // cout << endl << endl << n / 5 - n / 15 << endl;
    return 0;
}