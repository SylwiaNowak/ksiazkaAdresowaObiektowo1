#include "AdresatMenedzer.h"

/*AdresatMenedzer::pobierzIdZalogowanegoUzytkownika() {
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}*/

/*void AdresatMenedzer::pobierzIdZalogowanegoUzytkownika()
{
    idZalogowanegoUzytkownika.pobierzIdZalogowanegoUzytkownika();
}*/


void AdresatMenedzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if (plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany" << endl;
    else cout << "Blad. Nie udalo sie dodac nowego adresata do pliku." << endl;
    system("pause");
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata() {
    Adresat adresat;
    string imie, nazwisko, numerTelefonu, email, adres;

    adresat.ustawId( (plikZAdresatami.pobierzIdOstatniegoAdresata() + 1) );
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    //adresat.ustawImie(wczytajLinie());
    //zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie());

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    //adresat.ustawNazwisko(wczytajLinie());
    //zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko());

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawNumerTelefonu(wczytajLinie());

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawEmail(wczytajLinie());

    cout << "Podaj adres: ";
    adres = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawAdres(wczytajLinie());

    adresat.ustawImie(imie);
    adresat.ustawNazwisko(nazwisko);
    adresat.ustawNumerTelefonu(numerTelefonu);
    adresat.ustawEmail(email);
    adresat.ustawAdres(adres);

    return adresat;
}

string AdresatMenedzer::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

void AdresatMenedzer::wyswietlWszystkichAdresatow() {
    system("cls");
    for (int i = 0; i < adresaci.size(); i++) {
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
        cout << adresaci[i].pobierzAdres() << endl;
    }
    system("pause");
}
