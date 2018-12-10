#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=10;

int enki(int t[N], int n, int suma, int start) //enki(t, n, suma, 0);
{
    int licznik=0;
    if(suma==0 and n==0) return 1;
    for(int i=start;i<N;i++){
    if(suma>=t[i])
       licznik+=enki(t, n-1, suma-t[i], i+1 );
    }
    return licznik;
}




int main()
{
    int t[N];
    int n;
    for(int i=0;i<N;i++)
        cin>>t[i];
    cin>>n;
    int suma;
    cin>>suma;
    cout<<enki(t, n, suma, 0);
}
