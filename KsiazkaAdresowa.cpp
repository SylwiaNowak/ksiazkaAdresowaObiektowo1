#include "KsiazkaAdresowa.h"

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego() {
    uzytkownikMenedzer.wybierzOpcjeZMenuGlownego();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika() {
    uzytkownikMenedzer.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer -> dodajAdresata();
    } else {
        cout << "Aby dodac adresata nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenedzer -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenedzer -> wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::usunAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer -> usunAdresata();
    } else {
        cout << "Aby usunac adresata nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()){
        adresatMenedzer -> edytujAdresata();
    } else {
        cout << "Aby edytowac adresata nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer -> wyswietlWszystkichAdresatow();
    }
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}


