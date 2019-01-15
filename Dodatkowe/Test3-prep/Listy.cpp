//dodawanie, usuwanie, zliczanie, wypisywanie, Sortowanie, usuwanie powtórzeñ



#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;

const int N=100;

struct node {
    int val;
    node* next;
};

void dodaj(node* &first, int k)
{
    if(first==NULL){
        node* p;
        p=new node;
        p->val=k;
        p->next=NULL;
        first=p;
        return;
    }
    else{
        node* p=first;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        node* q;
        q=new node;
        q->val=k;
        p->next=q;
        q->next=NULL;
        return;
    }
}

void usun(node* &first, int n)
{
    int k=n;
    if(first==NULL){cout<<"Lista jest pusta."<<endl;return;}
    node* p=first;
    node* q=first;
    if(n<1){cout<<"Bledny numer elementu."<<endl;return;}
    if(n==1){
        first=p->next;
        delete p;
        return;
    }
    n--;
    if(p->next!=NULL)
    {
        p=p->next;
        n--;
    }
    while(n>0  && p->next!=NULL){p=p->next;q=q->next;n--;}
    if(p->next==NULL && n>0){cout<<"Nie ma wystarczajaco duzo elementow."<<endl; return;}
    q->next=p->next;
    delete p;
    return;
}

void wypisz(node* first)
{
    cout<<endl<<"[";
    while(first!=NULL){
        cout<<first->val;
        if(first->next!=NULL)cout<<", ";
        first=first->next;
    }
    cout<<"]"<<endl<<endl;
}

int zlicz(node* first)
{
    int n=0;
    while(first!=NULL)
    {
        n++;
        first=first->next;
    }
    return n;
}

void usun_co_drugi (node* &first, int p=1)
{
    int n=zlicz(first);
    while(p<=n-p+1){
    usun(first,p);
    p=p+1;
    }
    cout<<endl;
}

void posortuj (node* &first)
{
    if(first==NULL or first->next==NULL)return;
    node *nfirst;
    nfirst=NULL;
    node* last;
    last=NULL;
    while(first->next!=NULL){
        int p=first->val;
        node* q;
        q=first;
        node *prev;
        prev=NULL;
        while(q->next!=NULL)
        {
            if(q->next->val<=p){
                prev=q;
                p=q->next->val;
            }
            q=q->next;
        }
        if(prev!=NULL){
            if(nfirst==NULL){
                nfirst=prev->next;
                prev->next=prev->next->next;
                last=nfirst;
                nfirst->next=NULL;
            }
            else{
                last->next=prev->next;
                prev->next=prev->next->next;
                last=last->next;
                last->next=NULL;
            }
        }
        else
        {
           if(nfirst==NULL){
                nfirst=first;
                first=first->next;
                node* last;
                last=nfirst;
                nfirst->next=NULL;
            }
             else{
                last->next=first;
                first=first->next;
                last=last->next;
                last->next=NULL;
            }
        }
    }
    last->next=first;
    last->next->next=NULL;
    first=nfirst;
}

void dodaj_mas(node* &first, int n)
{
    int p;
    node *q;
    q=NULL;
    for(int i=0;i<n;i++){
        cin>>p;
        dodaj(first,p);
    }
}

void usun_powtorzenia(node* &first)
{
    if(first==NULL)return;
    posortuj(first);
    node *p;
    p=first;
    int n=first->val;
    while(p->next!=NULL)
    {
        if(p->next->val==n){
            node* w;
            w=p->next;
            p->next=p->next->next;
            delete w;
        }
        else {
            p=p->next;
            n=p->val;
        }
    }
}


int main()
{
    node *first=NULL;
    cout<<"Witaj"<<endl<<"(dodaj/usun/wypisz/zamknij/zlicz/usun_co_drugi/posortuj/dodaj_mas/usun_powtorzenia)"<<endl;
    string a="";
    while(a!="zamknij")
    {
        cin>>a;
        if(a=="dodaj"){
            int p;
            cin>>p;
            dodaj(first,p);
            wypisz(first);
        }
        if(a=="usun"){
            int p;
            cin>>p;
            usun(first,p);
            wypisz(first);
        }
        if(a=="wypisz")wypisz(first);
        if(a=="zlicz") cout<<zlicz(first);
        if(a=="usun_co_drugi"){
            usun_co_drugi(first);
            wypisz(first);
        }
        if(a=="posortuj")
        {
            posortuj(first);
            wypisz(first);
        }
        if(a=="dodaj_mas")
        {
            int n;
            cin>>n;
            dodaj_mas(first, n);
            wypisz(first);
        }
        if(a=="usun_powtorzenia")
        {
            usun_powtorzenia(first);
            wypisz(first);
        }
    }
}
