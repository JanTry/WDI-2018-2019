#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool pierwsze(int a)
{
    for(int i=2;i<=16;i++){
        int x=a;
        bool cyfra=true;
        while(x>0){
            if(x%i==0 || x%i==1 || x%i==4 || x%i==6 || x%i==8 || x%i==9|| x%i==10 || x%i==12 || x%i==14 || x%i==15 || x%i==16) cyfra=false;
            x=x/10;
        }
        if(cyfra) return true;
    }
    return false;
}

int main()
{
    int a;
    cin>>a;
    if(pierwsze(a))
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
}
