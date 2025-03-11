#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double g = 9.81;

int main() {
    double h = 0.0;
    double d = 0.0;
    double altezza_s = 0.0;

    cout << "*** Caduta dei gravi ***" << endl;
    cout << "Inserire il delta s:" << endl;
    cin >> d;

    cout << "Inserire l'altezza: " << endl;
    cin >> h;

    double i = 0.0;

    cout << "+--t--+---altezza dal suolo----+" << endl;
    while (h > 0) {
        altezza_s = h - (0.5) * g * pow(i, 2);

        cout << left << setw(2) << "|" << fixed << setprecision(2) << i << "|" << right << setw(25) << fixed <<
                            setprecision(10) << altezza_s << "|" << endl;

        if (altezza_s < 0 || altezza_s == 0) {
            break;
        }

        i = i + d;
    }


    return 0;
}
