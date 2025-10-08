#include <iostream>
using namespace std;

void CountUp1(int n)
{
    if(n==0)
    {
        cout<<"0"<<endl;
        return;
    }
    else
    {
        CountUp1(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int broj;
    cin>>broj;
    CountUp1(broj);
    return 0;
}
