// Written by Bartosz Lewczuk
// https://github.com/GizaBartosz

#include <iostream>
#include <fstream>
using namespace std;

void about()
{ // how to use
    cout << "0 - save and end" << endl;
    cout << "1 - create LineString" << endl;
}

int main()
{
    cout << "KML FILE CREATOR" << endl;
    cout << "Podaj nazwę pliku:"<< endl;
    string nazwa="";
    cin>>nazwa;
    nazwa="saves/"+nazwa+".kml";
    char task = 0;
    fstream plik;
    plik.open(nazwa, ios::out | ios::trunc );
    do
    {
        about();
        cin >> task;
        if (plik.good())
        {
            if (task == '1')
            {
                plik<<"test";
            }
            
        }
        else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;

    } while (task != '0');
    plik.close();
    return 0;
}