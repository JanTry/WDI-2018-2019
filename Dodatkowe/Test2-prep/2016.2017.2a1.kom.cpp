#include<iostream>

using namespace std;

//Zadanie 1 z grupy a z 2 kartkówki z WDI semestrze zimowym 2016/2017.

int NWD(int a, int b){ //Klasyczny Euklides. NWD(a,b);
    while(b!=0){
        int c=b;    //alternatywnie-> while(b!=0)swap(a%=b,b);
        b=a%b;
        a=c;
    }
    return a;
}
/*Alternatywnie
int NWD(int a, int b){
    while(b!=0)swap(a%=b,b);
    return a;
}
*/

int pary(int N, int a=0, int b=0){ //pary(N); -> argumenty definiowane "int a=0" ustawiaja domyslna wartosc "a" jako 0. Tzn, ze jezeli "a" nie zostanie podane, to zostanie przyjêta wartoœæ 0
    if(N==0){ //Gdy jest to ostatnie wywo³anie, a zatem podzia³ na  a i b jest juz gotowy
        if(NWD(a,b)==1){ //Jezeli NWD==1 <=> jezeli sa wzglednie pierwsze
            cout<<a<<" "<<b<<endl; //wypisujemy je
            return 1; //zwracamy 1, skoro owa para sie znalazla
        }
        else return 0; // zwracamy 0, skoro nie sa wzglednie pierwsze
    }
    return pary(N/10, a*10 +(N%10), b) + pary(N/10, a, b*10 +(N%10)); //Wywolujemy kolejne instancje dodajac cyfre do a, lub do b i zmienjszajac o nia N.
} //Zwracamy w kazdej instancji (poza ostatnia) sume uzbieranych par.
//tzn- pary(....) jest suma zer i jedynek otrzymanych w ostatnich instancjach (takich ostatnich instancji bedzie 2 do potegi n).

int main(){
int a;
cin>>a;
cout<<endl<<pary(a);
}
