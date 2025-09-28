#include <iostream>
using namespace std;
int main()
{
    int godina;
    cout<<"Vnesi godina";
    cin>>godina;
    if((godina%4==0 && godina%10!=0)||(godina%400==0))
    cout<<"Godinata e prestapna";
    else
        cout<<"Godinata ne e prestapna";
    return 0;
}
