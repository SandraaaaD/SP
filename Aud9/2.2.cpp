#include <iostream>
using namespace std;

void PecatenjeCountDown(int n)
{
    if(n==0)
        return;
    else
    {
        cout<<n%10<<endl;
        PecatenjeCountDown(n/10);
    }
}

int main()
{
    int broj;
    cin>>broj;
    PecatenjeCountDown(broj);
    return 0;
}
