//dali brojot e simetrichen ;
#include <iostream>
using namespace std;
int main()
{
    int x,x1,x2,x3,x4,x5,x6;
    cin>>x;
    x1=x/100000;
    x2=(x/10000)%10;
    x3=(x/1000)%10;
    x4=(x/100)%10;
    x5=(x/10)%10;
    x6=x%10;
    if(x1==x6 && x2==x5 && x3==x4)
        cout<<1;
    else
        cout<<0;
    return 0;
}
