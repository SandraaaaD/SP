//great student
#include <iostream>
using namespace std;
int main()
{
    int godina_zapisuvanje,predvideni_krediti;
    float prosek;
    double poeni,br_krediti;
    cin>>br_krediti>>godina_zapisuvanje>>prosek;
    if(br_krediti>100 && prosek>8)
    {
        predvideni_krediti=godina_zapisuvanje*60;
        poeni=br_krediti/predvideni_krediti*10+(prosek-8.5)*6.5;
        if(br_krediti>240)
            cout<<"Needs to graduate!";
        else if(prosek>9)
            cout<<"Great student";
        cout<<" Points: "<<poeni;
    }
    else
        cout<<0;
    return 0;
}
