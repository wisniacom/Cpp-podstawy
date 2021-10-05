// Qt Creator

#include <iostream>
#include <cstdio>

#include <cmath>

using namespace std;

int main()
{
//    float a, b;
//    printf("Liczba: \n");

//    cin >> a >> b;
//    cout << "suma: " << a + b << endl;
//    cout << "iloczyn:" <<  a * b << endl;
//    cout << "iloraz:" << a / b << endl;
    //
    //
//    float n, Sn, an;

//    cout << "Wprowadz n, Sn i an:" << endl;
//    cin >> n >> Sn >> an;
//    cout << "a1=" << (2 * Sn) / n - an  << endl;
    //
    //
//    int g1, m1;

//    cout << "Wprowadz godzine w formacie HH:mm \n";

//    scanf("%i:%i",&g1,&m1);
//    int t1 = g1*60+m1;

//    scanf("%i:%i",&g1,&m1);
//    int t2 = g1*60+m1;

//    if(t1<t2) {
//        cout << t2-t1 << " min" << endl;
//    } else {
//        cout << t1-t2 << " min" << endl;
//    };
    //
    //
//    double v, n0, c=300000000, mr;
//    cout << "Podaj predkosc oraz mase:" << endl;
//    cin >> v >> n0;
//    mr = n0 / sqrt(1-(v*v/(c*c)));
//    cout << mr << endl;
    //
    //
//    float rok, roznica_lat, teoretyczna_liczba_tranzystorow, liczba_tranzystorow, roznica_tranzystorow;
//    cout << "Podaj rok i liczbe tranzystorow: " << endl;
//    cin >> rok >> liczba_tranzystorow;
//    roznica_lat = rok - 1971;
//    teoretyczna_liczba_tranzystorow = 2250 * pow (2, roznica_lat/2);
//    roznica_tranzystorow = abs(teoretyczna_liczba_tranzystorow - liczba_tranzystorow);
//    cout << "Teoretyczna liczba tranzystorow w " << rok << " roku: " << teoretyczna_liczba_tranzystorow << endl;
//    cout << "Roznica tranzystorow: " << roznica_tranzystorow << endl << "a w %: " << abs ( liczba_tranzystorow / roznica_tranzystorow) << "%" << endl;
    //
    //
    //    float r1, t1, r2, t2, roznica_mcy, wynik;

//    cout << "Podaj rok i liczbe tranzystorow: " << endl;
//    cin >> r1 >> t1;
//    cout << "Podaj rok i liczbe tranzystorow: " << endl;
//    cin >> r2 >> t2;
//    roznica_mcy = abs (12*r1-12*r2);
//    wynik = roznica_mcy / abs (t1 - t2);
//    cout << wynik << endl;
    //
    //
//    float rozmiarPliku, przepustowoscLacza;

//    cin >> rozmiarPliku >> przepustowoscLacza;
//    float rozmiarPlikuBity = rozmiarPliku * 8;
//    rozmiarPlikuBity *= 10/8;

//    cout << rozmiarPlikuBity / przepustowoscLacza << endl;
    //
    //
    float czasSekwencyjny, P, S, wynik;

    cout << "Podaj czas sekwencyjny, udzial obliczen i liczbe watkow" << endl;
    cin >> czasSekwencyjny >> P >> S;
    P = P/100;
    wynik = 1/((1-P)+P/S);
    wynik = czasSekwencyjny / wynik;
    cout << wynik << endl;
        
    return 0;  
}
