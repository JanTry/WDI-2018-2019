#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int N=4;

struct ulamek{
    int l;
    int m;
};

int NWD(int a, int b)
{
    int pom;

	while(b!=0)
    {
		pom = b;
		b = a%b;
		a = pom;
	}

    return a;
}

ulamek skroc (ulamek a)
{
    while(NWD(a.l, a.m)!=1){
        int q=NWD(a.l, a.m);
        a.l/=q;
        a.m/=q;
    }
    return a;
}

ulamek dodawanie (ulamek a, ulamek b)
{
    ulamek w;
    w.l=a.l*b.m+b.l*a.m;
    w.m=b.m*a.m;
    return skroc(w);
}
ulamek odejmowanie (ulamek a, ulamek b)
{
    ulamek w;
    w.l=a.l*b.m-b.l*a.m;
    w.m=b.m*a.m;
    return skroc(w);
}
ulamek mnozenie (ulamek a, ulamek b)
{
    ulamek w;
    w.l=a.l*b.l;
    w.m=b.m*a.m;
    return skroc(w);
}
ulamek dzielenie(ulamek a, ulamek b)
{
    ulamek w;
    w.l=a.l*b.m;
    w.m=b.l*a.m;
    return skroc(w);
}
int main()
{
    int licznik =0;
    ulamek t[N];
    for(int i=0;i<N;i++)
        cin>>t[i].l>>t[i].m;
    for(int i=0;i<N;i++){
        for(int j=i+1; j+1<N ; j++)
        {
            ulamek a=odejmowanie(t[j-1],t[j]);
            ulamek b=odejmowanie(t[j],t[j+1]);
            if(a.l==b.l && a.m==b.m) licznik ++;
            else break;
        }
    }
    cout<<licznik<<endl; //arytmetyczne
    licznik=0;
        for(int i=0;i<N;i++)
        cin>>t[i].l>>t[i].m;
    for(int i=0;i<N;i++){
        for(int j=i+1; j+1<N ; j++)
        {
            ulamek a=dzielenie(t[j-1],t[j]);
            ulamek b=dzielenie(t[j],t[j+1]);
            if(a.l==b.l && a.m==b.m) licznik ++;
            else break;
        }
    }
    cout<<licznik<<endl; //geometryczne
}
