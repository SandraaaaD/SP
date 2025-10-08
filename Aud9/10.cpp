#include <iostream>
using namespace std;

int max(int a[],int n,int max_el)
{
    if(n==0)
        return max_el;
    else
    {
        if(a[n-1]>max_el)
        {
            max_el=a[n-1];
            return max(a,n-1,max_el);
        }
        else
            return max(a,n-1,max_el);
    }
}

int main()
{
    int i,golemina, a[100];
    cin>>golemina;
    for (i=0;i<golemina;i++)
        cin>>a[i];
    cout<<max(a,golemina,a[golemina-1]);
    return 0;
}
