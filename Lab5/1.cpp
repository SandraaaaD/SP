//absolutna
#include <iostream>
#include <cmath>
using namespace std;

int presmetka(int a,int b,int c)
{
    int d=static_cast<int>(fabs((a - b)) + fabs((b - c)));
    return d;
}

int main()
{
    int a,b,c,n,min_d=1000000;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(presmetka(a,b,c)<min_d)
            min_d= presmetka(a,b,c);
    }
    cout<<min_d;
    return 0;
}
