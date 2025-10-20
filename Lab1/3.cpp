//vnesi brojka(denovi); da ispechati kolku godini, meseci i denovi se toa;
#include <iostream>
using namespace std;
int main()
{
    int x,godini,meseci,denovi;
    cout<<"Vnesi brojka(denovi)"<<endl;
    cin>>x;
    godini=x/365;
    meseci=(x%365)/30;
    denovi=(x%365)%30;
    cout<<godini<<" "<<meseci<<" "<<denovi<<endl;
    return 0;
}
