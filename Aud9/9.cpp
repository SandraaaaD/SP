#include <iostream>
using namespace std;

int zbir(int a[],int n)
{
    //if(n==1)
    //    return a[n-1];
    if(n==0)
        return 0;
    else
        return a[n-1]+ zbir(a,n-1);
}

int main() {
    int i,golemina, a[100];
    cin>>golemina;
    for (i = 0; i < golemina; i++)
        cin >> a[i];
    cout<<zbir(a, golemina) << endl;
    return 0;
}
