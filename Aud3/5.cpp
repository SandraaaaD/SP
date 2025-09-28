#include <iostream>
using namespace std;
int main()
{
    int a,b,c,P;
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
        cout<<"Ne moze da se konstruira triagolnik."<<endl;
    else
    {
        cout<<"Moze da se konstruira triagolnik."<<endl;
        if(c*c == a*a+b*b)
            cout<<"Triaglonikot e pravoagolen"<<endl;
        else
            cout<<"Triaglonikot ne e pravoagolen"<<endl;
        P=a*b/2;
        cout<<"Plostinata mu e: "<<P<<endl;
    }

}
