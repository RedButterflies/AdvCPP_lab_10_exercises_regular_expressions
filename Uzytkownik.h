//
// Created by szyns on 13.01.2024.
//

#ifndef LAB_10_EXERCISES_UZYTKOWNIK_H
#define LAB_10_EXERCISES_UZYTKOWNIK_H
#include <iostream>
#include <string>
using namespace std;

class Uzytkownik {
private:
    string imie;
    string nazwisko;
    string wiek;
    string nrTelefonu;
    string email;
public:
    Uzytkownik(const string &imie, const string &nazwisko, const string &wiek, const string &nrTelefonu,
               const string &email);

    const string &getImie() const;

    void setImie(const string &imie);

    const string &getNazwisko() const;

    void setNazwisko(const string &nazwisko);

    const string &getWiek() const;

    void setWiek(const string &wiek);

    const string &getNrTelefonu() const;

    void setNrTelefonu(const string &nrTelefonu);

    const string &getEmail() const;

    void setEmail(const string &email);
};


#endif //LAB_10_EXERCISES_UZYTKOWNIK_H
