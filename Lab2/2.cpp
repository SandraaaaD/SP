//vnesi 4 broja, prv+vtor=paren, tret+cetvrt=neparen;
#include <iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    if((x1+x2)%2==0 && (x3+x4)%2!=0)
        cout<<1;
    else
        cout<<0;
    return 0;
}
