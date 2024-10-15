#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Swap x and y
    int temp = x;
    x = y;
    y = temp; // kurang tanda ";"

    cout << "After swap: x = " << y << endl;

    return 0;
}
