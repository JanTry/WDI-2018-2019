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

bool rightdown(int w, int k)
{
    if(w==7 && k==7) return true;
    if(w<7 && poss(w, k, w+1, k)) if(rightdown(w+1, k)) return true;
    if(k<7 && poss(w, k, w, k+1)) if(rightdown(w, k+1)) return true;
    if(k<7 && w<7 && poss(w, k, w+1, k+1)) if(rightdown(w+1, k+1)) return true;
    return false;
}
bool rightup(int w, int k)
{
    if(w==0 && k==7) return true;
    if(w>0 && poss(w, k, w-1, k)) if(rightup(w-1, k)) return true;
    if(k<7 && poss(w, k, w, k+1)) if(rightup(w, k+1)) return true;
    if(k<7 && w>0 && poss(w, k, w-1, k+1)) if(rightup(w-1, k+1)) return true;
    return false;
}
bool leftdown(int w, int k)
{
    if(w==7 && k==0) return true;
    if(w<7 && poss(w, k, w+1, k)) if(leftdown(w+1, k)) return true;
    if(k>0 && poss(w, k, w, k-1)) if(leftdown(w, k-1)) return true;
    if(k>0 && w<7 && poss(w, k, w+1, k-1)) if(leftdown(w+1, k-1)) return true;
    return false;
}
bool leftup(int w, int k)
{
    if(w==0 && k==0) return true;
    if(w>0 && poss(w, k, w-1, k)) if(leftup(w-1, k)) return true;
    if(k>0 && poss(w, k, w, k-1)) if(leftup(w, k-1)) return true;
    if(k>0 && w>0 && poss(w, k, w-1, k-1)) if(leftup(w+1, k-1)) return true;
    return false;
}



int main()
{

}
