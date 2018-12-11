#include<iostream>

using namespace std;

int NWD(int a, int b){
    while(b!=0){
        int c=b;
        b=a%b;
        a=c;
    }
    return a;
}
int pary(int N, int a=0, int b=0){
    if(N==0){
        if(NWD(a,b)==1){
            cout<<a<<" "<<b<<endl;
            return 1;
        }
        else return 0;
    }
    return pary(N/10, a*10 +(N%10), b) + pary(N/10, a, b*10 +(N%10));
}

int main(){}
