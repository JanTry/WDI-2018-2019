#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tab[n+1][3];
    for(int i=0;i<n+1;i++){
        tab[i][0]=n+1-i;
    }
    for(int i=1;i<n+1;i++){
        tab[i][1]=0;
        tab[i][2]=0;
    }

    tab[0][1]=tab[0][2]=n+1;
    int t[3];
    t[0]=n;
    t[1]=t[2]=0;
    int w;
    for(int i=0;t[1]<n and t[2]<n;i=(i+1)%3){
        int p= tab[t[i]][i];
        if(p<tab[t[(i+1)%3]][(i+1)%3]){
            tab[t[i]][i]=0;
            t[(i+1)%3]++;
            t[i]--;
            tab[t[(i+1)%3]][(i+1)%3]=p;
            cout<<p<<" z "<<i<<" na "<<(i+1)%3<<endl;
            i++;
        }
        else if(tab[t[(i+2)%3]][(i+2)%3]>p)
        {
            t[(i+2)%3]++;
            t[i]--;
            tab[t[(i+2)%3]][(i+2)%3]=p;
            tab[t[i]+1][i]=0;
            cout<<p<<" z "<<i<<" na "<<(i+2)%3<<endl;
            i=i+2;
        }
    }
    cout<<endl<<"Udalo sie!!!"<<endl;
}
