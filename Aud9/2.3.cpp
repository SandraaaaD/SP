#include <iostream>
using namespace std;

void PecatenjeCountUp(int n)
{
    if(n==0)
        return;
    else
    {
        PecatenjeCountUp(n/10);
        cout<<n%10<<endl;
    }
}

int main()
{
    int broj;
    cin>>broj;
    PecatenjeCountUp(broj);
    return 0;
}
