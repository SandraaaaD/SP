#include <iostream>
using namespace std;

int faktoriel(int broj)
{
    int rez=1;
    for(int i=broj;i>0;i--) //mozhi i nanapred isto e
    {
        rez*=i;
    }
    return rez;
}

int suma(int broj)
{
    int n=0,s=0;
    for(int i=1;i<=broj;i++)
    {
        n+=i;
        s+=faktoriel(n);
    }
    return s;
}
int main()
{
    int broj;
    cin>>broj;
    cout<<suma(broj);
    return 0;
}
