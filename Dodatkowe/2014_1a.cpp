#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a=1,b[10];
    for(int i=0;i<10;i++) b[i]=0;
    while(a!=0){
        cin>>a;
        if(a>b[9])
        {
            b[9]=a;
            for(int i=9;i>0;i--){
                if(b[i]>b[i-1]) swap(b[i],b[i-1]);
            }
        }
    }
    cout<<b[9];
}
