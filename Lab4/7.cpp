//bingo
#include <iostream>
using namespace std;
int main()
{
    int x,temp,desna_cifra,suma=0;
    int i=1;
    while(cin>>x)
    {
        if(x>90)
            break;
        temp=x;
        desna_cifra=temp%10;
        if(i<7)
            suma+=suma*10+desna_cifra;
        else if(i>7)
            suma+=x;
        i++;
    }
    cout<<suma;
    return 0;
}
