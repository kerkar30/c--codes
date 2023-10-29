#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a[50],size;
    cout << "Enter size : ";
    cin >> size;
    
    int count = 0;
    while(count < size){
        cout << count+1 << " ";
     cin>>a[count++];
    }
    count = 0;
    while(count<size)
    cout<<count+1<<"  "<< a[count++];
    return 0;
}