#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
    float skutecznosc;
};

void otworz_plik(ifstream& plik, const string& nazwa_pliku) {
    plik.open(nazwa_pliku);
    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku.\n";
        exit(1);
    }
}

Osoba wczytaj_osobe(ifstream& plik) {
    Osoba osoba;
    plik >> osoba.imie >> osoba.nazwisko >> osoba.wiek >> osoba.skutecznosc;
    return osoba;
}

void wypisz_osobe(const Osoba& osoba) {
    cout << "Imie: " << osoba.imie << ",\t Nazwisko: " << osoba.nazwisko << ",\t Wiek: " << osoba.wiek << ",\t Skutecznosc: " << osoba.skutecznosc << endl;
}

string zamien_nazwisko(const string& nazwisko) {
    string nowe_nazwisko = nazwisko;
    for (size_t i = 1; i < nowe_nazwisko.length() - 3; ++i) {
        nowe_nazwisko[i] = '*';
    }
    return nowe_nazwisko;
}

void zapisz_do_pliku(const Osoba& osoba, const string& nazwa_pliku) {
    ofstream plik(nazwa_pliku, ios::app);
    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku do zapisu.\n";
        exit(1);
    }
    plik << "Imie: " << osoba.imie << ", Nazwisko: " << zamien_nazwisko(osoba.nazwisko) << ", Wiek: " << osoba.wiek << ", Skutecznosc: " << osoba.skutecznosc << endl;
}

int main() {
    ifstream plik;
    string nazwa_pliku = "osoby.txt";

    otworz_plik(plik, nazwa_pliku);

    Osoba osoba;
    while (plik.peek() != EOF) {
        osoba = wczytaj_osobe(plik);
        wypisz_osobe(osoba);
        if (osoba.imie.length() > 3 && osoba.nazwisko.length() > 3 && osoba.nazwisko.substr(osoba.nazwisko.length() - 3) == "ski") {
            zapisz_do_pliku(osoba, "osoby.max.txt");
        }
    }

    plik.close();

    return 0;
}
