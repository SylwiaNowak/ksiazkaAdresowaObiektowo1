#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

class PlikTekstowy {
public:
    bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif
