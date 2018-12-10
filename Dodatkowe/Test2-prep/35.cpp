#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;


bool podzbiory(int t[N], int k, int suma=0, int n=0)
{
    if(k==0){
        if (suma==0) return true;
        else return false;
    }
    if(n>=N || k<0) return false;
    if(podzbiory(t, k, suma, n+1 )) return true;
    if(podzbiory(t, k-1, suma -t[n], n+1)) return true;
    if(podzbiory(t, k-1, suma +t[n], n+1)) return true;
}



int main()
{

}
