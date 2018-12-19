#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node{
    int val;
    node *next;
};

void co_drugi (node *first)
{
    node *p,*q;
    p=first;
    q=first;
    for(int i=0; p->next!=NULL; i=(i+1)%2){
        q=p;
        p=p->next;
        if(i=0){
        q->next=p->next;
        delete p;
        node *p=q->next;
        }
    }

}


int main()
{

}
