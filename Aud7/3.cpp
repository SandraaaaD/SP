#include <iostream>
using namespace std;
int main()
{
    int i,a[100],b[100],golemina,suma=0;
    cin>>golemina;
    for(i=0;i<golemina;i++)
        cin>>a[i];
    for(i=0;i<golemina;i++)
        cin>>b[i];
    for(i=0;i<golemina;i++)
        suma+=(a[i]*b[i]);
    cout<<suma;
    return 0;
}
