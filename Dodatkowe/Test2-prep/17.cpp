#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

int t[8][8];


bool poss(int w, int k, int nw, int nk)
{
    int a=t[w][k];
    while(a>10)
        a=a/10;
    if (a==t[nw][nk]%10) return true;
    else return false;
}

bool krol(int w, int k)
{
    if(w==7 && k==7) return true;
    if(w<7 && poss(w, k, w+1, k)) if(krol(w+1, k)) return true;
    if(k<7 && poss(w, k, w, k+1)) if(krol(w, k+1)) return true;
    if(k<7 && w<7 && poss(w, k, w+1, k+1)) if(krol(w+1, k+1)) return true;
    return false;
}



int main()
{

}
