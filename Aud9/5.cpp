#include <iostream>
using namespace std;

int ZbirCifri(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+ ZbirCifri(n/10);
}

int main()
{
    int broj;
    cin>>broj;
    cout<<ZbirCifri(broj);
    return 0;
}
