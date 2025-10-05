#include <iostream>
using namespace std;
int main()
{
    int niza[10],broj;
    for (int i = 0; i < 10; i++) {
        niza[i]=0;
    }
    while (cin>>broj){
        niza[broj]+=1;
    }
    for (int i = 0; i < 10; i++) {
        cout<<i<<" - "<<niza[i]<<endl;

    }

    return 0;
}
