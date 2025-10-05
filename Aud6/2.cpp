#include <iostream>
using namespace std;

int zbir(int broj)
{
    return broj%100+(broj/100)%100;
}
int main()
{
    int i,brojac=0;
    for(i=1000;i<=9999;i++)
    {
        if(i%zbir(i)==0)
        {
            cout<<i<<endl;
            brojac++;
        }
    }
    cout<<brojac;
    return 0;
}

