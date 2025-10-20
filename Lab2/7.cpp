//vnesi 3 pozitivni broja; izlez koj e najmal; ako site 3br se isti da se otpecati poraka site 3 se isti
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==b && b==c && a==c)
        cout<<"Site 3 broja imaat ista vrednost";
    else if(a<=b && a<=c)
        cout<<"Najmala vrednost ima brojot "<<a;
    else if(b<=a && b<=c)
        cout<<"Najmala vrednost ima brojot "<<b;
    else if(c<=a && c<=b)
        cout<<"Najmala vrednost ima brojot "<<c;
    return 0;
}

