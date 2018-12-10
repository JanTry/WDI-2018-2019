#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

int jedynki(int a)
{
    int p=0;
    while(a>0){
        p+=a%2;
        a=a/2;
    }
    return p;
}

bool podzial(int t[N], int n, int s1=0, int s2=0, int s3=0, int licznik=0)
{
    if (licznik==N){if (s1==s2 && s2==s3) return true;} else return false;
    int p=jedynki(t[licznik]);
    if(podzial(t, n, s1+p, s2, s3, licznik+1) ||
       podzial(t, n, s1, s2+p, s3, licznik+1) ||
       podzial(t, n, s1, s2, s3+p, licznik+1) )return true;
    else return false;
}


int main()
{

}
