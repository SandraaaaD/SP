//viktor finki stipendija
#include <iostream>
using namespace std;
int main() {
    double otc1,otc2,otc3,otc4,otc5,otc6,prosek5,prosek6;
    cin>>otc1>>otc2>>otc3>>otc4>>otc5>>otc6;
    prosek5=(otc1+otc2+otc3+otc4+otc5)/5;
    prosek6=(otc1+otc2+otc3+otc4+otc5+otc6)/6;
    if(prosek6>=prosek5)
    {
        cout<<"Enrolled 6 subjects"<<endl;
        if(prosek6>=8.5)
            cout<<1;
        else
            cout<<0;
    }
    else
    {
        cout<<"Enrolled 5 subjects"<<endl;
        cout<<0;
    }
    return 0;
}
