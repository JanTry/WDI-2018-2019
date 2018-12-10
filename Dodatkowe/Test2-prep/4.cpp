#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=10;




bool divide(int t[N], int a=0, int b=0, int c=0, int n=0) //1st call : divide(t);
{
    if (n==N && eql(a,b,c)) return true; //If there are no more elements, and a,b,c fulfills given conditions, return true.
    else
        if(n<N) //Triple recursion for 3 cases: 1. Add an element to a, 2. ... 3. ... .
        {
            if(divide(t, a+t[n], b, c, n+1)) return true; //if last function returns true, all the recursion levels return true.
            if(divide(t, a, b+t[n], c, n+1)) return true;
            if(divide(t, a, b, c+t[n], n+1)) return true;
        }
    return false;
}

int main()
{
    int t[N];
    for(int i=0;i<N;i++)cin>>t[i];  //just for testing
    if(divide(t))cout<<"It can be done"<<endl;
    else cout<<"It can't be done"<<endl;
}
