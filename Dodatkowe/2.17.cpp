#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long potega(int a, int n)
{
    long long b=1;
    for(int i=b;i<n;i++)
        b=b*a;
    return b;
}

int main()
{
    int n;
    cin>>n;
    long long tab[10];
    tab[0]=0;
    for(int i=1;i<10;i++){
        tab[i]=potega(i,n);
    }
    int t[n];
    for(long long i=potega(10,n-1);i<potega(10,n);i++){
        long long a=i;
        long long b=0;
        while(a>0)
        {
            b=b+potega(a%10,n);
            a=a/10;
        }
        if(b==i) cout<<b<<endl;
    }
}
