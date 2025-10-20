//interval
#include <iostream>
using namespace std;
int main()
{
    int broj,from, to, suma=0;
    cin>>from>>to;
    for(broj=from; broj<to; broj++)
    {
        if(broj%3==0 && broj%2!=0)
            suma+=broj;
    }
    cout<<suma;
    return 0;
}
