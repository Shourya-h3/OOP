#include <iostream>
#include <cmath>
using namespace std;

class DB; 

class DM {
private:
    double meters;
    double centimeters;

public:
    DM(double m = 0, double cm = 0) : meters(m), centimeters(cm) {}

    void input() {
        cout << "Enter meters: ";
        cin >> meters;
        cout << "Enter centimeters: ";
        cin >> centimeters;
    }

    void display() const {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }

    friend DM add(DM dm, DB db);
};

class DB {
private:
    double feet;
    double inches;

public:
    DB(double f = 0, double i = 0) : feet(f), inches(i) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    friend DM add(DM dm, DB db);
};

DM add(DM dm, DB db) {
    double totalMeters = db.feet * 0.3048 + db.inches * 0.0254;
    double totalCentimeters = totalMeters * 100;

    double totalM = dm.meters + totalMeters;
    double totalCm = dm.centimeters + totalCentimeters;

    totalM += totalCm / 100.0;
    totalCm = totalCm - (totalM - dm.meters - totalMeters) * 100.0;

    return DM(totalM, totalCm);
}

int main() {
    DM dm1, dmResult;
    DB db1;

    cout << "Enter DM values:" << endl;
    dm1.input();

    cout << "Enter DB values:" << endl;
    db1.input();

    dmResult = add(dm1, db1);

    cout << "DM: ";
    dm1.display();
    cout << "DB: ";
    db1.display();
    cout << "Sum in DM: ";
    dmResult.display();

    return 0;
}
