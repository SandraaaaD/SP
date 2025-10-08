#include <iostream>
using namespace std;

int nzs(int a,int b)
{
    if(a==1 && b==1)
        return 1;
    else
        return b/a*nzs(a/(b/a),b/(b/a));
}

int main()
{
    int broj1,broj2;
    cin>>broj1>>broj2;
    cout<<nzs(broj1,broj2);
    return 0;
}
