#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=10;

void wypisz(int tab[N],int n)
{
    for(int i=n;i>0;i++)
        cout<<tab[i]<<" ";
    cout<<endl<<endl;
}

int enki(int t[N], int tab[N], int n, int iloczyn, int start=0) //enki(t, n, iloczyn);
{
    int licznik=0;
    if(iloczyn==1 and n==0){
        wypisz(tab,n);
        return 1;
    }
    for(int i=start;i<N;i++){
    if(iloczyn%t[i]==0){
       tab[n]=t[i];
       licznik+=enki(t,tab, n-1, iloczyn/t[i], i+1 );
    }
    }
    return licznik;
}




int main()
{
    int t[N], tab[N];
    int n;
    for(int i=0;i<N;i++)
        cin>>t[i];
    cin>>n;
    int iloczyn;
    cin>>iloczyn;
    cout<<enki(t, tab, n, iloczyn, 0);
}
