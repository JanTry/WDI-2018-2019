#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node{
    int val;
    node *next;
};

void dodaj (node *&first, int n)
{
    node *p;
    p=new node;
    p->val=n;
    if(first==NULL){first =p; p=NULL; delete p; return;}
    node *q;
    q=first;
    while(q!=NULL)
    {
        q=q->next;
    }
    q==first ? first=p : q=p;
    q=p=NULL;
    delete q;
    delete p;
}

int main()
{

}
