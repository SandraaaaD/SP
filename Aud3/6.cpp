#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Vnesi strani";
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
        cout<<"Ne moze da se konstruira triagolnik."<<endl;
    else
    {
        if (a == b && b == c)
            cout << "Tragolnikot e ramnostran.";
        else if (a == b || b == c || a == c)
            cout << "Tragolnikot e ramnokrak.";
        else
            cout << "Tragolnikot e raznostran.";
        float P, s;
        s = (a + b + c) / 2;
        P = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Plostinata e: " << P << endl;
    }
    return 0;
}
