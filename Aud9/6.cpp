#include <iostream>
using namespace std;

int pojavuvanja8(int n)
{
    if(n==0)
        return 0;
    else if(n%10==8 && (n/10)%10==8)
        return 2+ pojavuvanja8(n/10);
    else if(n%10==8 && (n/10)%10!=8)
        return 1+ pojavuvanja8(n/10);
    else
        return pojavuvanja8(n/10);
}

int main()
{
    int broj;
    cin>>broj;
    cout<<pojavuvanja8(broj);
    return 0;
}
