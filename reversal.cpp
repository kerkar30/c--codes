#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a,rev = 0;
    cout << "Enter number : ";
    cin >> a;
    
    while(a > 0){
     rev =  rev *10 + a%10;
     a/=10;
    }
    cout<<" reversed number: "<< rev;
    return 0;
}
