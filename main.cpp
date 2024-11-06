#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdexcept>

#include "Kruh.h"

int main() {

    Kruh k(2.0,1.0,1.5);

    k.vypisNaObrazovku();

    std::cout << "Obsah je " << k.obsah() << "\n";

    k.zmenPolomer(3.0);
    k.zmenStred(2.0,4.0);

    k.vypisNaObrazovku();

    if (k.leziUvnitr(1.0,3.0)) std::cout << "Bod lezi v kruhu\n";

    return 0;
}