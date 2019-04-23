#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze {
public:
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    char wczytajZnak();
    int wczytajLiczbeCalkowita();
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif
