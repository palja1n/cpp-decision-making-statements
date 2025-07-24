#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter the first number: ";
    cin >> x;
    
    cout << "Enter the second number: ";
    cin >> y;
    
    cout << "Enter the third number: ";
    cin >> z;
    
    if (x>y) {
        if (x>z){
            cout << x << " is the largest number."<< endl;
        }
        else {
            cout << z << " is the largest number."<<endl;
        }
    }
    
    else if (x<y) {
        if (y>z){
            cout << y << " is the largest number." << endl;
        }
        else {
            cout << z << " is the largest number." << endl;
        }
    }

    return 0;
}
