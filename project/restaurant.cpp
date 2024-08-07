#include <iostream>
#include <iomanip>
using namespace std;


struct Menu {
    string name;
    float price;
    int quantity;

    // Constructor
    Menu(string n = "", float p = 0.0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Function to display the item details
    void displayItem() {
        cout <<  name;
        cout <<  quantity;
        cout <<  price << endl;
    }

    // Function to calculate total price for the item
    float getTotal() {
        return quantity * price;
    }
};

// Function prototypes
void displayMenuOptions();
void displayMenu(Menu menu[], int numItems);
void orderItem(Menu menu[], int numItems);
void generateBill(Menu menu[], int numItems);

int main() {
    const int MAX_ITEMS = 10;
    Menu menu[MAX_ITEMS] = {
        Menu("Burger", 150),
        Menu("Pizza", 250),
        Menu("Pasta", 200),
        Menu("Salad", 200),
        Menu("Sandwich", 150),
        Menu("Fries", 151),
        Menu("Coke", 80),
        Menu("Coffee", 200),
        Menu("Tea", 10),
        Menu("Ice Cream", 60)
    };
    int numItems = 10;
    int choice;

    do {
        displayMenuOptions();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                // Display menu
                displayMenu(menu, numItems);
                break;
            case 2:
                // Order item
                orderItem(menu, numItems);
                break;
            case 3:
                // Generate bill
                generateBill(menu, numItems);
                break;
            case 4:
                // Exit
                cout << "************* THANK YOU **************" << endl;
                cout << "********** VISIT AGAIN ***************" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while(choice != 4);

    return 0;
}

// Function to display menu options
void displayMenuOptions() {
    cout << "\n*********** MENU OPTIONS **********" << endl;
    cout << "1. Display Menu" << endl;
    cout << "2. Order Item" << endl;
    cout << "3. Generate Bill" << endl;
    cout << "4. Exit" << endl;
    cout << "---------------------------------------" << endl;
}

// Function to display the menu items
void displayMenu(Menu menu[], int numItems) {
    cout << "\n===== MENU =====" << endl;
    cout <<  "Item Name";
    cout <<  "Price";
    cout << endl;
    cout << "=================" << endl;

    for (int i = 0; i < numItems; ++i) {
        cout <<  menu[i].name;
        cout <<  menu[i].price;
        cout << endl;
    }
    cout << "=================" << endl;
}

// Function to order an item
void orderItem(Menu menu[], int numItems) {
    int itemIndex;
    int quantity;

    cout << "Enter item number to order (1-" << numItems << "): ";
    cin >> itemIndex;

    if (itemIndex < 1 || itemIndex > numItems) {
        cout << "Invalid item number." << endl;
        return;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    menu[itemIndex - 1].quantity += quantity;
    cout << "Order placed successfully." << endl;
}

// Function to generate bill
void generateBill(Menu menu[], int numItems) {
    cout << "\n===== BILL =====" << endl;
    cout <<  "Item Name";
    cout << "Quantity";
    cout <<  "Price" << endl;
    cout << "=================" << endl;

    float totalAmount = 0.0;
    for (int i = 0; i < numItems; ++i) {
        if (menu[i].quantity > 0) {
            menu[i].displayItem();
            totalAmount += menu[i].getTotal();
        }
    }

    cout << "------------------------------------" << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "------------------------------------" << endl;
}