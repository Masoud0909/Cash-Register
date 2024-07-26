#include <iostream>
#include <iomanip>
#include<vector>

using namespace std;

class CashRegister {

public:

    CashRegister(); //Default Constructor - no parameters need
    void clear();   //mutator
    void addItem(double price); //mutator
    double getTotal() const;    //accessor
    int get_count() const;      //accessor
    void display_all() const;

private:

    vector <double> itemPrices;

};

//Class function members implementation:

CashRegister::CashRegister() {}

void CashRegister::clear() {

    itemPrices.clear();
}

void CashRegister::addItem(double price) {

    itemPrices.push_back(price);

}

int CashRegister::get_count() const {
    
    return itemPrices.size();

}

double CashRegister::getTotal() const {

    double total = 0;
    for (int i = 0; i < itemPrices.size(); i++) {
        total += itemPrices[i];
    }
    return total;
}

void CashRegister::display_all() const {

    cout << "Number of items: " << get_count() << endl;
    cout << "Prices of all items: ";
    for (int i = 0; i < itemPrices.size(); i++) {
        cout << itemPrices[i] << " ";
    }
    cout << endl << "Total: " << getTotal() << endl;
}

int main()
{
    
    CashRegister cash1;
    CashRegister cash2;
    cash1.addItem(1.99);
    cash1.addItem(5.99);
    cash2.addItem(10.99);
    cash2.addItem(20);
    cash2.addItem(17.5);

    cout << "Cash #1: \n";
    cash1.display_all();
    cash1.clear();
    cout << "Cash #2: \n";
    cash2.display_all();
    cash2.clear();

}
