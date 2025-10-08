#include <iostream>
using namespace std;

int faktoriel(int n)
{
    if(n==1)
        return 1;
    else
        return n* faktoriel(n-1);
}

int suma(int n)
{
    if(n==1)
        return 1; //mozhi i n==0 return 0
    else
        return n+ suma(n-1);
}

int main()
{
    int zbir=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        zbir+= faktoriel(suma(i));
    }
    cout<<zbir;
    return 0;
}
