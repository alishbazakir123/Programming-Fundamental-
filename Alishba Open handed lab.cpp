#include <iostream>
#include <iomanip>

using namespace std;

// Structure to hold menu item data
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void displayMenu(MenuItem menu[], int size) {
    cout << "Restaurant Menu:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << menu[i].name << " - $" << fixed << setprecision(2) << menu[i].price << endl;
    }
}

// Function to take orders
void takeOrder(MenuItem menu[], int size, int order[], int quantity[]) {
    int choice;
    char more;
    do {
        cout << "Enter item number to order: ";
        cin >> choice;
        if (choice < 1 || choice > size) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }
        cout << "Enter quantity: ";
        cin >> quantity[choice - 1];
        order[choice - 1] = 1;
        cout << "Do you want to order more? (y/n): ";
        cin >> more;
    } while (more == 'y' || more == 'Y');
}

// Function to calculate bill
double calculateBill(MenuItem menu[], int order[], int quantity[], int size, double taxRate, double tipRate) {
    double subtotal = 0;
    for (int i = 0; i < size; i++) {
        if (order[i]) {
            subtotal += menu[i].price * quantity[i];
        }
    }
    double tax = subtotal * taxRate;
    double tip = subtotal * tipRate;
    double total = subtotal + tax + tip;

    cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal;
    cout << "\nTax: $" << tax;
    cout << "\nTip: $" << tip;
    cout << "\nTotal Bill: $" << total << endl;

    return total;
}

int main() {
    const int SIZE = 5;
    MenuItem menu[SIZE] = {{"Burger", 5.99}, {"Pizza", 8.99}, {"Pasta", 7.49}, {"Salad", 4.99}, {"Soda", 1.99}};
    int order[SIZE] = {0}, quantity[SIZE] = {0};
    double taxRate = 0.08, tipRate = 0.1; // 8% tax, 10% tip

    displayMenu(menu, SIZE);
    takeOrder(menu, SIZE, order, quantity);
    calculateBill(menu, order, quantity, SIZE, taxRate, tipRate);

    return 0;
}