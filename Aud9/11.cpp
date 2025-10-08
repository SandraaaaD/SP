#include <iostream>
using namespace std;

int broenje(int a[],int n, int brojac)
{
    if(a[n]==5)
        return 1; //return 1+brojac-za koj el po red odnazad        samo brojac-za kolku ima donego
    else
    {
        if(a[n-1]!=5)
        {
            return 1+broenje(a,n-1,brojac); //brojac++ pa return f
        }
        else
            return broenje(a,n-1,brojac);
    }
}

int main()
{
    int a[100],golemina,i;
    cin>>golemina;
    for(i=0;i<golemina;i++)
        cin>>a[i];
    cout<<broenje(a,golemina,0);
    return 0;
}
