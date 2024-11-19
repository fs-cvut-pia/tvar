#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdexcept>

#include "Kruh.h"
#include "Ctverec.h"
#include "Srdce.h"

int main() {

    std::vector<Tvar*> tvary = {
        new Kruh(2.0,1.0,1.5),
        new Kruh(1.0,0.0,0.0),
        new Ctverec(3.0,2.0,2.0),
        new Srdce(0.0,0.0)
    };

    for (auto tvar : tvary) {
        tvar->vypisNaObrazovku();
        std::cout << "Obsah je " << tvar->obsah() << "\n";
        std::cout << "============================\n";
    }

    for (auto tvar : tvary) delete tvar;

    return 0;
}