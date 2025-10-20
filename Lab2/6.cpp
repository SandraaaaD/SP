//vnesi 3 broja; ako se site isti ili site razlichni 1; ako ne 0;
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b && b==c && a==c) || (a!=b && b!=c && a!=c))
        cout<<1;
    else
        cout<<0;
    return 0;
}

