#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct punkt{float x,y,z;};a

bool odlsrodka(float x, float y, float z, int licznik)
{
    x=x/licznik;
    y=y/licznik;
    z=z/licznik;
    return sqrt((x*x)+(y*y)+(z*z));
}

bool odleglosc( punkt t[N], float r,int n=0,int licznik=0, float x=0,float y =0,float z=0)
{
    if(n==N){if(odlsrodka(x,y,z,licznik)<r) return true; else return false;}
    if(odleglosc(t,r,n+1,licznik+1,x+t[n].x,y+t[n].y,z+t[n].z)) return true;
    if(odleglosc(t,r,n+1,licznik, x,y,z)) return true;
    return false;
}



int main()
{

}
