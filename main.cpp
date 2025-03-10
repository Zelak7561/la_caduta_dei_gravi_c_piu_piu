#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double g = 9.81;

int main() {

    const double h = 56.70;
    int d = 0;

    double altezza_finale;
//3,39

    cout << "Inserire i secondi totali" << endl;
    cin >> d;

    cout << fixed << setprecision(2);
    for (int i = 0 ; i <= d; i++) {
        altezza_finale = (-0.5) * g * pow(i , 2);
        cout << "t: " << i << " | " << "L'altezza finale e per ogni secondo: " <<  altezza_finale << endl;
    }





    return 0;
}