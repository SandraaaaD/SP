#include <iostream>
using namespace std;
int main()
{
    int x,max=-100000;
    while(cin>>x)
    {
        if(x>max)
            max=x;
    }
    cout<<max;
    return 0;
}
