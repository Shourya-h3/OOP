#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int pid;
    string pname;
    double price;
    double rating;

public:
    Product(int p, string n, double pr, double r) {
        pid = p;
        pname = n;
        price = pr;
        rating = r;
    }

    void display() {
        cout << "Product ID: " << pid << endl;
        cout << "Product Name: " << pname << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << endl;
        cout << endl;
    }
};

int main() {

    Product p1(1, "Laptop", 999.99, 4.5);
    Product p2(2, "Mouse", 29.99, 4.0);

    cout << "Product 1:" << endl;
    p1.display();

    cout << "Product 2:" << endl;
    p2.display();

    return 0;
}
