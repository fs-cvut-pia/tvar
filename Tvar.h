#ifndef TVAR_H
#define TVAR_H

class Tvar {
public:
    void zmenStred(double x_novy, double y_novy);
    virtual bool leziUvnitr(double xx, double yy) const = 0; 
protected:
    Tvar();
    Tvar(double x_in, double y_in);
    double x,y;
    virtual double vypocitejObsah() const;

    virtual double x_min() const = 0;            
    virtual double x_max() const = 0;
    virtual double y_min() const = 0;
    virtual double y_max() const = 0;
};

#endif