#include <iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x>0)
    {
        if(x<=2)
            x*=10.5;
        else
            x=x*4+2*6.5;

        cout<<x;
    }
    else
        cout<<"Mora da vnesete pozitiven broj";
    return 0;
}
