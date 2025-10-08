#include <iostream>
using namespace std;

bool isPrime(int n,int divisor)
{
    if(divisor==1)
        return true;
    else if(n%divisor==0)
        return false;
    else
        return isPrime(n,divisor-1);
}

int NextPrime(int n)
{
    if(isPrime(n,n-1))
        return n;
    else
        return NextPrime(n+1);
}

int main()
{
    int broj,razlika;
    cin>>broj;
    razlika=NextPrime(broj+1)-broj;
    cout<<razlika;
    return 0;
}
