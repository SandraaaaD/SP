#include <iostream>
#define PI 3.14
using namespace std;

double dijametar(double radius)
{
    return 2*radius;
}
double perimetar(double radius)
{
    return 2*radius*PI;
}

double ploshtina(double radius)
{
    return radius*radius*PI;
}

int main()
{
    double radius,D,Pe,Pl;
    cin>>radius;
    D=dijametar(radius);
    Pe=perimetar(radius);
    Pl=ploshtina(radius);
    cout<<"Dijametar na krugot = "<<D<<endl;
    cout<<"Perimetar na krugot = "<<Pe<< endl;
    cout <"Ploshtina na krugot = "<<Pl<< endl;
    return 0;
}
