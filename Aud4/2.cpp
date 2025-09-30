#include <iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int broj=1;

    for (int i = 0; i < n; i++) {
        broj*=x;
    }

    cout<<broj;
}
