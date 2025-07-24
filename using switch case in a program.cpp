#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Welcome to the Fruit Shop!" << endl;
    cout << "1. Apple" << endl;
    cout << "2. Banana" << endl;
    cout << "3. Mango" << endl;
    cout << "4. Grapes" << endl;
    cout << "5. Orange" << endl;
    cout << "6. Strawberry" << endl;
    cout << "7. Watermelon" << endl;

    cout << "Enter the number of the fruit you want to buy: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Apple costs ₹100 per kg.";
            break;
        case 2:
            cout << "Banana costs ₹40 per dozen.";
            break;
        case 3:
            cout << "Mango costs ₹120 per kg.";
            break;
        case 4:
            cout << "Grapes cost ₹90 per kg.";
            break;
        case 5:
            cout << "Orange costs ₹70 per kg.";
            break;
        case 6:
            cout << "Strawberry costs ₹150 per box.";
            break;
        case 7:
            cout << "Watermelon costs ₹60 per piece.";
            break;
    }

    return 0;
}
