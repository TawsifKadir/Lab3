#include<iostream>
using namespace std;

int main() {
    // Write C++ code here
    dynArr<double> arr1(5);double x;
    for(int i=0;i<5;i++){
        cin >> x;
        arr1.setValue(i,x);
    }
    arr1.printAll();
    

    return 0;
}
