//Vnesi dva celi broja; najdi nivna sredina; prvio br zgolemigo za s, a vtorio namaligo za s
#include <iostream>
using namespace std;
int main()
{
    float a,b,s;
    cout<<"Vnesi dva celi broja"<<endl;
    cin>>a>>b;
    s=(a+b)/2.0;
    cout<<"Nivnata sredina e "<<s<<endl;
    a+=s;
    b-=s;
    cout<<"Novi vrednosti: "<<a<<", "<<b<<endl;
    cout<<"Razlikata megju novite broevi e: "<<a-b<<endl;
    return 0;
}
