//vnesi radius; presmetaj L i P;
#include <iostream>
using namespace std;
int main()
{
    float r, p=3.14,L,P;
    cout<<"Vnesi radium na kruzhnica"<<endl;
    cin>>r;
    L=2*r*p;
    P=r*r*p;
    cout<<"Perimetarot e: "<<L<<" a plostinata e: "<<P<<endl;
    return 0;
}
