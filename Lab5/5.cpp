//f
#include <iostream>
using namespace std;

int obratenBroj(int broj)
{
    int obraten=0,cifra;
    while(broj>0)
    {
        cifra=broj%10;
        obraten=obraten*10+cifra;
        broj/=10;
    }
    return obraten;
}

int sumaNaCifri(int broj)
{
    int suma=0,cifra;
    while(broj>0)
    {
        cifra=broj%10;
        suma+=cifra;
        broj/=10;
    }
    return suma;
}

void Pecati(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        int s= sumaNaCifri(i);
        int o= obratenBroj(s);
        if(i%o==0)
            cout<<i<<endl;
    }
}
int main()
{
    int k,l;
    cin>>k>>l;
    Pecati(k,l);
    return 0;
}
