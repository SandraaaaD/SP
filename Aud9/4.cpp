#include <iostream>
using namespace std;

int niza(int n) {
    if (n==0 || n==1){
        return n;
    } else {
        return (n-1) + niza(n-2)/double(n)+niza(n-2)/double(n);
    }
}

int main (){
    int n;
    cin>>n;
    cout<<niza(n)<<" ";
    return 0;
}
