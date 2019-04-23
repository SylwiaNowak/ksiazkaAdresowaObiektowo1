#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    int podajIdWybranegoAdresata();
    //int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    //void usunWybranaLinieWPliku(int numerUsuwanejLinii);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsunietegoAdresata, int idOstatniegoAdresata);
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneEdytowanegoAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
            adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
        };
    void dodajAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void edytujAdresata();
};

#endif
