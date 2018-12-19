#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node{
    int val;
    node *next;
};

void usun(node *&first)
{
    if(first!=NULL){
        node *p;
        node *q;
        q=NULL;
        p=first;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        if(p==first)first=NULL;
        else{
            q->next=NULL;
            delete p;
        }
    }
}

int main()
{

}
