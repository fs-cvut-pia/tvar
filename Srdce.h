#ifndef SRDCE_H
#define SRDCE_H

#include "Tvar.h"
#include <cmath>

class Srdce : public Tvar {
public:
    Srdce(double x_in, double y_in) : Tvar(x_in,y_in) {
        S = vypocitejObsah();
    };
    virtual bool leziUvnitr(double x_bod, double y_bod) const {
        double xb = x_bod - x;
        double yb = y_bod - y;
        double vzorec1 = 1+std::sqrt(1-(std::abs(xb)-1)*(std::abs(xb)-1));
        double vzorec2 = 1-3*std::sqrt(1-sqrt(std::abs(xb))/std::sqrt(2));

        if (yb <= vzorec1 && yb >= vzorec2) return true;
        else return false;
    };
    virtual void vypisNaObrazovku() const {
        std::cout << "Srdce se stredem v X = (" << x << "," << y << ")\n";
    };
    double obsah() const { return S; };
protected:
    virtual double x_min() const { return x - 2.0; };            
    virtual double x_max() const { return x + 2.0; };
    virtual double y_min() const { return y - 2.0; };
    virtual double y_max() const { return y + 2.0; };
private:
    double S;
};
#endif