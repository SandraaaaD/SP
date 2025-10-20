//vnesi tri celi ednocifreni broevi; uslov; kombiniranje i da izlezi nov tricifren broj;
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,broj;
    cout<<"Vnesi tri celi ednocifreni broevi"<<endl;
    cin>>a>>b>>c;
    broj=a*100+b*10+c;
    cout<<broj<<endl;
    cout<<broj-a<<" "<<broj-b<<" "<<broj-c<<endl;
    return 0;
}
