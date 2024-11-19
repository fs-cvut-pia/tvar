#ifndef KRUH_H
#define KRUH_H

#include "Tvar.h"

class Kruh : public Tvar {
public:
    Kruh();
    Kruh(double r_in, double x_in, double y_in);
    virtual void vypisNaObrazovku() const;
    double obsah() const;
    double obvod() const;
    void zmenPolomer(double r_novy);
    virtual bool leziUvnitr(double x_bod, double y_bod) const;
protected:
    virtual double vypocitejObsah() const;
    virtual double x_min() const { return x - r; };            
    virtual double x_max() const { return x + r; };
    virtual double y_min() const { return y - r; };
    virtual double y_max() const { return y + r; };
private:
    double vypocitejObvod() const;
    double r;
    double S,O;
};

#endif