#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

bool zlozona(int n)
{
    //...
}

void binarne(int a, int b, int n, int &licznik)
{
    if (zlozona(n))licznik++;
    if (a==0 && b==0) return;
    if(a>0) binarne(a-1,b,n*2+1,licznik);
    if(b>0) binarne(a,b-1,n*2,licznik);
}

int zlicz(int a, int b)
{
    int licznik=0;
    int n=1;
    binarne(a-1,b,n,licznik);
    return licznik;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<zlicz(a,b);
}
