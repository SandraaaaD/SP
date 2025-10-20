//da se vnesi 5cifren broj; suma od cifrite na parnite pozicii; suma od cifrite na neparnite pozicii
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Vnesete petcifren broj"<<endl;
    cin>>x;
    cout<<"Zbirot na cifrite na parnite pozicii e: "<<x/10000+(x/100)%10+x%10<<endl;
    cout<<"Zbirot na cifrite na neparnite pozicii e: "<<(x/1000)%10+(x/10)%10<<endl;
    return 0;
}


