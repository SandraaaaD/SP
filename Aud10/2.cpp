#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char a[101];
    cin.getline(a,101);
    cout<<strlen(a)<<endl;
    cout<<dolzhina(a);
    return 0;
}
