#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include "Uzytkownik.h"
#include <vector>
#include <algorithm>
#include <boost/algorithm/string.hpp>
//#include <boost/algorithm/string.hpp>
#include <set>

using namespace boost::algorithm;

using namespace std;

void dopasowanie(string line, regex &expression)
{
    cout<<"\nDla lancucha: "<<line<<endl;
if(regex_match(line.begin(),line.end(),expression))
{

    smatch res;
    regex_match(line,res,expression);
    cout<<"Zanleziono dopasowania: "<<endl;
    for(auto pos = res.begin();pos !=res.end();pos++)
    {
        cout<<*pos<<endl;
    }

}

else
{
    cout<<"Nie znaleziono dopasowania"<<endl;
}
}
bool dopasowany(string line, regex &expr)
{
    if(regex_match(line.begin(),line.end(),expr))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    //Zadanie 10.1
    regex liczbaZmiennoprzecinkowa(".*[+-]{1}[0-9]+[.]{1}[0-9]+.*");
    smatch res;
    string a = "tralalalalala +3.45 tralalalala";
    string b =  "3.45";
    string c = "-6.55";
    dopasowanie(a,liczbaZmiennoprzecinkowa);
    dopasowanie(b,liczbaZmiennoprzecinkowa);
    dopasowanie(c,liczbaZmiennoprzecinkowa);



    //Zadanie 10.2
    regex godzina(".*([0-1][0-9]|2[0-3]):([0-5][0-9])(:[0-5][0-9])?.*");
    string g1 = "Bede w domu o 29:59:09 w nocy";
    string g2 = "Bede w domu o 09:25 w nocy";
    string g3 = "Bede w domu o 21:23:23 w nocy";
    string g4 = "Bede w domu o 2312:61:61 w nocy";
    dopasowanie(g1,godzina);
    dopasowanie(g2,godzina);
    dopasowanie(g3,godzina);
    dopasowanie(g4,godzina);



    //Zadanie 10.3
    //ulica
    regex ulica("([a-zA-z])+[ ]*[a-zA-Z]*");
    string ulica1 = "Marszalkowska";
    string ulica2 = "Marszalkowska 12";
    string ulica3 = "Rondo Krwiodawcow";
    string ulica4 = "Krakowskie Przedmiescie";
    dopasowanie(ulica1,ulica);
    dopasowanie(ulica2,ulica);
    dopasowanie(ulica3,ulica);
    dopasowanie(ulica4,ulica);
    //kod pocztowy
    regex kodPocztowy("[0-9]{2}-[0-9]{3}");
    string kod1 = "20-908";
    string kod2 = "200-908";
    string kod3 = "20-9308";
    string kod4 = "aa-cdb";
    dopasowanie(kod1,kodPocztowy);
    dopasowanie(kod2,kodPocztowy);
    dopasowanie(kod3,kodPocztowy);
    dopasowanie(kod4,kodPocztowy);
    //numer domu
    regex nrdomu("[0-9]+|[0-9]+[A-Z]{1}");
    string nrdomu1 = "236C";
    string nrdomu2 = "236CD";
    string nrdomu3 = "33a";
    string nrdomu4 = "33";
    dopasowanie(nrdomu1,nrdomu);
    dopasowanie(nrdomu2,nrdomu);
    dopasowanie(nrdomu3,nrdomu);
    dopasowanie(nrdomu4,nrdomu);
    //nr mieszkania
    regex nrmieszkania("[0-9]{1,3}");
    string nrmieszkania1 = "46";
    string nrmieszkania2 = "336";
    string nrmieszkania3 = "46555";
    string nrmieszkania4 = "4";
    dopasowanie(nrmieszkania1,nrmieszkania);
    dopasowanie(nrmieszkania2,nrmieszkania);
    dopasowanie(nrmieszkania3,nrmieszkania);
    dopasowanie(nrmieszkania4,nrmieszkania);
//Zadanie 10.4
regex imie("[A-Z]{1}[a-z]*");
regex nazwisko("[A-Z]{1}[a-z]*(-[A-Z]{1}[a-z]*(-[A-Z]{1}[a-z]*))?");
regex wiek("[0-9]|[1-9][1-9]");
regex nrTelefonu("[1-9]{1}[0-9]{8}");
regex email("[a-zA-Z0-9\\_\\-\\.]*@[a-zA-Z0-9]*[.][a-zA-Z0-9]*");
string email1 = "oluta9_.-92@gmail.com";
    dopasowanie(email1,email);
    cout<<"\n\n\nPodaj imie: "<<endl;
    string imie1;
    cin>>imie1;
    if(dopasowany(imie1,imie))
    {
        cout<<"Podaj nazwisko: "<<endl;
        string nazwisko1;
        cin>>nazwisko1;
        if(dopasowany(nazwisko1,nazwisko))
        {
            cout<<"Podaj wiek: "<<endl;
            string wiek1;
            cin>>wiek1;
            if(dopasowany(wiek1,wiek))
            {
                cout<<"Podaj numer telefonu: "<<endl;
                string nrtelefonu1;
                cin>>nrtelefonu1;
                if(dopasowany(nrtelefonu1,nrTelefonu))
                {
                    cout<<"Podaj email: "<<endl;
                    string emaila;
                    cin>>emaila;
                    if(dopasowany(emaila,email))
                    {
                        try {
                            ofstream ofstream1;
                            ofstream1.open("daneUzytkownika.csv", ios::app);
                            if (ofstream1.is_open()) {
                                ofstream1<<imie1+";"+nazwisko1+";"+wiek1+";"+nrtelefonu1+";"+emaila+"\n";
                                cout<<"Dane zapisane do pliku"<<endl;
                                ofstream1.close();
                            } else {
                                throw runtime_error("Blad przy otwieraniu pliku");
                            }
                        }
                        catch(runtime_error &r) {
                            cout<<r.what()<<endl;
                        }


                    }
                    else
                    {
                        cout<<"Podales nieprawidlowe dane.Sprobuj ponownie"<<endl;

                    }
                }
                else
                {
                    cout<<"Podales nieprawidlowe dane.Sprobuj ponownie"<<endl;

                }
            }
            else
            {
                cout<<"Podales nieprawidlowe dane.Sprobuj ponownie"<<endl;

            }        }
        else
        {
            cout<<"Podales nieprawidlowe dane.Sprobuj ponownie"<<endl;

        }
    }
    else
    {
        cout<<"Podales nieprawidlowe dane.Sprobuj ponownie"<<endl;

    }
//Zadanie 10.5
    vector<Uzytkownik>uzytkownicy;
try {

    string imieq;
    string nazwiskoq;
    string wiekq;
    string nrTelq;
    string emailq;
    ifstream ifstream1;
    ifstream1.open("daneUzytkownika.csv");
    string line;
    if (ifstream1.is_open()) {
        while(!ifstream1.eof()) {
            getline(ifstream1, line, ';');
            imieq = line;
            getline(ifstream1, line, ';');
            nazwiskoq = line;
            getline(ifstream1, line, ';');
            wiekq = line;
            getline(ifstream1, line, ';');
            nrTelq = line;
            getline(ifstream1, line, '\n');
            emailq = line;
            uzytkownicy.emplace_back(Uzytkownik(imieq, nazwiskoq, wiekq, nrTelq, emailq));
        }
        ifstream1.close();
    } else {
        throw runtime_error("Plik nie zostal otwarty poprawnia");
    }
}
catch(runtime_error &r)
{
    cout<<r.what()<<endl;
}

vector<string>domeny;
for_each(uzytkownicy.begin(),uzytkownicy.end(),[&domeny](Uzytkownik &u){
    size_t atPos = u.getEmail().find('@');
    if (atPos != string::npos) {
        domeny.push_back( u.getEmail().substr(atPos));
    }
});

set<string>unikalneDomenyS(domeny.begin(),domeny.end());
vector<string>unikalneDomeny(unikalneDomenyS.begin(),unikalneDomenyS.end());
cout<<"\n\n\nUnikalne domeny"<<endl;
for_each(unikalneDomeny.begin(),unikalneDomeny.end(),[](string &d){cout<<d<<endl;});

cout<<"\n\n\nNumery telefonu, ktore koncza sie parzysta liczba: "<<endl;
for_each(uzytkownicy.begin(),uzytkownicy.end(),[](Uzytkownik &u){if(atoi(&u.getNrTelefonu()[8])%2==0)cout<<u.getNrTelefonu()<<endl;});

cout<<"\n\n\nNazwiska laczone: "<<endl;
for_each(uzytkownicy.begin(),uzytkownicy.end(),[](Uzytkownik &u){if(any_of(u.getNazwisko().begin(),u.getNazwisko().end(),
                                                                           is_any_of("-"))) cout<<u.getNazwisko()<<endl;});
cout<<"\n\n\nStatystyka imion: "<<endl;
map<string,int>imiona;
    for_each(uzytkownicy.begin(),uzytkownicy.end(),[&imiona](Uzytkownik &u){imiona.insert(make_pair(u.getImie(),0));});
    for(auto i = imiona.begin();i!=imiona.end();i++)
    {
        for(int j=0;j<uzytkownicy.size();j++)
        {
            if(i->first == uzytkownicy[j].getImie())
            {
                i->second++;
            }
        }
    }

    for_each(imiona.begin(),imiona.end(),[](const pair<string,int>& imie){
        cout<<"Imie: "<<imie.first<<" Count: "<<imie.second<<endl;
    });
    return 0;
}
