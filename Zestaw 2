void 1(){
long long p,o,k,s;
    cin>>p;
    long long a=1,b=1,c=1;
    int q=0;
    s=p;
    while(a<=p)
    {
        c=a;
        a=b;
        b=c+b;
        if(p%a==0 && q==0)
        {
            p=p/a;
            q=1;
            o=a;
            k=b;
            while(o<=p)
            {
                c=o;
                o=k;
                k=c+k;
                if(p==o)
                {
                    q=2;
                    p=1;
                }
            }
            if (p!=1)
            {
                p=s;
                q=0;
            }
        }
    }
    if(q==2)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
}
void 4(){
    long long a,k=1,q=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {

        k=i;

        while(k%2==0){k=k/2;}

        while(k%3==0){k=k/3;}

        while(k%5==0){k=k/5;}

        if(k==1)
        q++;

    }
    cout<<q;
}
void 5(){
  long long n;
    cin>>n;
    long int a,p=1,q=1,z=1;
    if (n>=100)
        z=6;
    n=n%100;
    a=n%10;
    for(int i=1;i<=a;i++)
        p=p*i;
    if(a>=5)
        p=p/10;
    p=p%10;
    n=n/10;
    a=n%10;
    for(int i=1;i<=a;i++)
        q=q*8;
    q=q%10;
    a=q*z*p;
    a=a%10;
    cout<<a;
}
int p[9]={0};
int q[9]={0};


//6 
void zamiana(int liczba,int o)
{
    for(int i=0;i<o ;i++)
    {
        p[i]=0;
        q[i]=0;
    }
    int i=0;
    while(liczba!=0)
    {
        p[i++]=liczba%2;
        liczba/=2;
    }

    for(int j=i-1;j>=0;j--)
    {
        q[j]=p[i-1-j];

    }
}

void 6()
{
    string a,b;
    cin>>a;
    cout<<endl<<"Oto owe liczby:"<<endl;
    long long x,y,z=1,e=0,k;
    b=a;
    x=a.length();
    for(int i=0;i<x;i++)
        z=z*2;
    int o=x;
    for(int i=1;i<=z;i++)
    {
        zamiana(i,o);
        for(int j=0;j<x;j++)
            b[j]=48;
        for(int j=0;j<x;j++)
        {
            if(p[j]==1)
            {
                b[e]=a[j];
                e++;
            }
        }
        k= atoi(b.c_str());
        while(k%10==0)
            k=k/10;
        if(k%7==0)
            cout<<k<<endl;
        e=0;
    }
}
