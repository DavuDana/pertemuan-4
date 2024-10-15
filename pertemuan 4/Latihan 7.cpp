#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1); //kurang tanda ";"
}

int main() {
   int num;
   cout << "enter a number: ";
   cin >> num;

   cout << "Factorial of " << num << " is " << factorial(num) << endl;
return 0;
}
