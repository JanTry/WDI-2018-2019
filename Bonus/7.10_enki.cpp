#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=10;

int enki(int t[N], int n, int iloczyn, int start) //enki(t, b, iloczyn, 0);
{
    int licznik=0;
    if(iloczyn==1 and n==0) return 1;
    for(int i=start;i<N;i++){
    if(iloczyn%t[i]==0)
       licznik+=enki(t, n-1, iloczyn/t[i], i+1 );
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
    int iloczyn;
    cin>>iloczyn;
    cout<<enki(t, n, iloczyn, 0);
}
