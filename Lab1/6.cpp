//vnesi 5 cifren br; iskastrigo; zbir na iskastrenite
#include <iostream>
using namespace std;
int main()
{
    int broj,x1,x2,x3,x4,x5;
    cout<<"Vnesi 5cifren broj"<<endl;
    cin>>broj;
    x1=broj/10000;
    x2=(broj/1000)%10;
    x3=(broj/100)%10;
    x4=(broj/10)%10;
    x5=broj%10;
    cout<<"Iskastreniot broj e: "<<x2<<x3<<x4<<endl;
    cout<<"Zbirot na iskastrenite brojki e: "<<x1+x5<<endl;
    return 0;
}

