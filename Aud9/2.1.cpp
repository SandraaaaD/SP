#include <iostream>
using namespace std;

void CountDown(int n)
{
    if(n==0)
    {
        cout<<"0";
        return;
    }
    else
    {
        cout<<n<<endl;
        CountDown(n-1);
    }
}

int main()
{
    int broj;
    cin>>broj;
    CountDown(broj);
    return 0;
}
