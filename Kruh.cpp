#include "Kruh.h"
#include <iostream>
#include <cmath>

Kruh::Kruh() : Tvar(0.0,0.0) {
    r = 0.0;
    S = 0.0; O = 0.0;
}

Kruh::Kruh(double r_in, double x_in, double y_in) : Tvar(x_in,y_in) {
    r = r_in;
    S = vypocitejObsah();
    O = vypocitejObvod();
}

double Kruh::obsah() const {
    return S;
}

double Kruh::obvod() const {
    return O;
}

void Kruh::vypisNaObrazovku() const {
    std::cout << "Kruh: r = " << r << ", X = (" << x << "," << y << ")\n";
    std::cout << "S = " << S << ", O = " << O << "\n";
}

void Kruh::zmenPolomer(double r_novy) {
    r = r_novy;
    S = vypocitejObsah();
    O = vypocitejObvod();
}
bool Kruh::leziUvnitr(double x_bod, double y_bod) const {
    return (x_bod - x)*(x_bod - x) + (y_bod - y)*(y_bod - y) <= r*r;
}
double Kruh::vypocitejObsah() const {
    return M_PI*r*r;
}
double Kruh::vypocitejObvod() const {
    return 2.0*M_PI*r;
}