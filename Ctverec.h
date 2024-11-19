#ifndef CTVEREC_H
#define CTVEREC

#include "Tvar.h"

class Ctverec : public Tvar {
public:
    Ctverec(double a_in, double x_in, double y_in) : Tvar(x_in,y_in) {
        a = a_in;
        S = vypocitejObsah();
        O = vypocitejObvod();
    };
    virtual bool leziUvnitr(double x_bod, double y_bod) const {
        return x_bod >= x_min() && x_bod <= x_max() &&
               y_bod >= y_min() && y_bod <= y_max();
    };
    virtual void vypisNaObrazovku() const {
        std::cout << "Ctverec o strane a = " << a << ", X = (" << x << "," << y << ")\n";
    };
    double obsah() const { return S; };
protected:
    virtual double vypocitejObsah() const {
        return a*a;
    };
    virtual double x_min() const { return x - a/2.0; };            
    virtual double x_max() const { return x + a/2.0; };
    virtual double y_min() const { return y - a/2.0; };
    virtual double y_max() const { return y + a/2.0; };
private:
    double vypocitejObvod() const {
        return 4*a;
    };
    double a;
    double S,O;
};
#endif