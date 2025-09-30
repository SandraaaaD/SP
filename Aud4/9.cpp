#include <iostream>
using namespace std;
int main()
{
    int n,i=1,suma_parni=0,suma_neparni=0,razlika;
    while(cin>>n)
    {
        if(i%2!=0)
            suma_neparni+=n;
        if(i%2==0)
            suma_parni+=n;
        i++;
    }
    cout<<suma_parni<<endl;
    cout<<suma_neparni<<endl;
    if(suma_parni>suma_neparni)
        razlika=suma_parni-suma_neparni;
    else
        razlika=suma_neparni-suma_parni;
    cout<<razlika;
    return 0;
}
