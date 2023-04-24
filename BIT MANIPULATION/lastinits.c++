#include <iostream>
using namespace std;
int clearBit(int num, int i) {
    return num & (1 << i);
}

int main() {
    int num = 20, i = 2;
    cout << "clearBit(" << num << ", " << i << ") = " << clearBit(num, i) << endl;
    
    i = 3;
    cout << "clearBit(" << num << ", " << i << ") = " << clearBit(num, i) << endl;
    
    i = 4;
    cout << "clearBit(" << num << ", " << i << ") = " << clearBit(num, i) << endl;

    cout<<"End of the program...";

    return 0;
}