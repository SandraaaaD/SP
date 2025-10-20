//dali brojot e specijalen; eden br e specijalen ako e deliv so zbirot na 2 i 3 cifra i 1,3,5 cifra se vo rastechki redosled
#include <iostream>
using namespace std;
int main()
{
    int x,x1,x2,x3,x4,x5;
    cin>>x;
    x1=x/10000;
    x2=(x/1000)%10;
    x3=(x/100)%10;
    x4=(x/10)%10;
    x5=x%10;
    if(x%(x2+x3)==0 && x1<x3 && x3<x5)
        cout<<1;
    else if(x2+x3==0)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
