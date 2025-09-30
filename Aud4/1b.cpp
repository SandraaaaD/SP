#include <iostream>
using namespace std;
int main()
{
    int i,suma=0;
    for(i=11;i<100;i+=2)
    {
        suma+=i;
        cout<<i<<"+";
    }

    cout<<"="<<suma;
    return 0;
}
