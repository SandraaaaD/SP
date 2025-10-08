#include <iostream>
using namespace std;

void nzd(int a,int b) //so void
{
    if(a%b==0)
    {
        cout<<b;
        return;
    }
    else
        nzd(b,a%b);
}

int nzd2(int a,int b) //so int
{
    if(a%b==0)
        return b;
    else
        return nzd2(b,a%b);
}

int main()
{
    int broj1,broj2;
    cin>>broj1>>broj2;
    nzd(broj1,broj2);
    return 0;
}
