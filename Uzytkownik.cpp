//
// Created by szyns on 13.01.2024.
//

#include "Uzytkownik.h"

Uzytkownik::Uzytkownik(const string &imie, const string &nazwisko, const string &wiek, const string &nrTelefonu,
                       const string &email) : imie(imie), nazwisko(nazwisko), wiek(wiek), nrTelefonu(nrTelefonu),
                                              email(email) {}

const string &Uzytkownik::getImie() const {
    return imie;
}

void Uzytkownik::setImie(const string &imie) {
    Uzytkownik::imie = imie;
}

const string &Uzytkownik::getNazwisko() const {
    return nazwisko;
}

void Uzytkownik::setNazwisko(const string &nazwisko) {
    Uzytkownik::nazwisko = nazwisko;
}

const string &Uzytkownik::getWiek() const {
    return wiek;
}

void Uzytkownik::setWiek(const string &wiek) {
    Uzytkownik::wiek = wiek;
}

const string &Uzytkownik::getNrTelefonu() const {
    return nrTelefonu;
}

void Uzytkownik::setNrTelefonu(const string &nrTelefonu) {
    Uzytkownik::nrTelefonu = nrTelefonu;
}

const string &Uzytkownik::getEmail() const {
    return email;
}

void Uzytkownik::setEmail(const string &email) {
    Uzytkownik::email = email;
}
