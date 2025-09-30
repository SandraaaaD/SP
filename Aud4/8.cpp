#include <iostream>
using namespace std;
int main()
{
    int max1,max2,x;
    if(cin>>max1>>max2)
    {
        while(cin>>x)
        {
            if(x>max1 || x>max2)
            {
                if(max1>max2)
                {
                    max2=max1;
                    max1=x;

                }
                else if(max1<max2)
                {
                    max1=max2;
                    max2=x;
                }
            }
        }
        cout<<max1<<" "<<max2;
    }
    else
        cout<<"Nevalidna reprezentacija na broj";
}
