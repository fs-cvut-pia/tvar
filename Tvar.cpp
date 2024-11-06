#include "Tvar.h"
#include <cstdlib>
#include <random>

Tvar::Tvar() {
    x = 0.0; y = 0.0;
}

Tvar::Tvar(double x_in, double y_in) {
    x = x_in; y = y_in;
}

void Tvar::zmenStred(double x_novy, double y_novy) {
    x = x_novy; y = y_novy;
}

double Tvar::vypocitejObsah() const {
    const int N = 1000;

    // Vytvorime nahodny generator bodu v obdelniku obsahujicim tvar
	std::random_device rd;  
    std::mt19937 gen(rd()); 
    double xl = x_min(); double xr = x_max();
    double yl = y_min(); double yr = y_max();
    std::uniform_real_distribution<> randx(xl,xr);
    std::uniform_real_distribution<> randy(yl,yr);
    
    double N_in = 0;
    
    for(int i=0; i<N; i++) {
       	double rand_x = randx(gen);
        double rand_y = randy(gen);

        if (leziUvnitr(rand_x,rand_y)) N_in +=1; // Spocitame nahodne zasahy do plochy tvaru
   	}

	return (xr-xl)*(yr-yl)*(N_in/N);
}