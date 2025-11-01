#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Patient {
private:
    int id, age;
    char name[50], gender[20], disease[50], address[100];
public:
    static int total;

    Patient() {
        id=0;
        age=0;
        strcpy(name, "");
        strcpy(gender, "");
        strcpy(disease, "");
        strcpy(address, "");
    }

    void input() {
        char temp[100];

        cout << "Enter ID: ";
        cin.getline(temp, 100);
        id = atoi(temp);

        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter Age: ";
        cin.getline(temp, 100);
        age = atoi(temp);

        cout << "Enter Gender: ";
        cin.getline(gender, 20);

        cout << "Enter Disease: ";
        cin.getline(disease, 50);

        cout << "Enter Address: ";
        cin.getline(address, 100);

        total++;
    }

    void printCard() {
        cout << "\n---- Registration Card ----\n";
        cout << "ID      : " << id << "\n";
        cout << "Name    : " << name << "\n";
        cout << "Age     : " << age << "\n";
        cout << "Gender  : " << gender << "\n";
        cout << "Disease : " << disease << "\n";
        cout << "Address : " << address << "\n";
        cout << "--------------------------\n";
    }

    void saveToFile() {
        ofstream fout("patientdata.txt", ios::app);
        fout << id << "," << name << "," << age << "," << gender << "," << disease << "," << address << "\n";
    }

    int getId() { return id; }

    bool operator==(Patient &p2) { return id == p2.id; }

    friend void friendDemo(Patient &);
};

int Patient::total = 0;

void friendDemo(Patient &p) {
    cout << "[Friend] The patient's ID is: " << p.id << endl;
}

class Person {
public:
    virtual void hello() { cout << "Patient registration done!\n"; }
};

class OOPPatient : public Person, public Patient {
public:
    void hello() { cout << "OOP Inheritance says: Welcome!\n"; }
};

int main() {
    Patient::total = 0;

    char temp[100];
    int n;

    cout << "How many patients do you want to register? ";
    cin.getline(temp, 100);
    n = atoi(temp);

    Patient plist[10];

    for (int i = 0; i < n; ++i) {
        cout << "\n--- Patient #" << (i+1) << " ---\n";
        plist[i].input();
        plist[i].saveToFile();
        friendDemo(plist[i]);

        if (i > 0 && plist[i] == plist[i-1])
            cout << "[Operator==] Warning: 2 consecutive patients have same ID!\n";
    }

    cout << "\n== Registration Cards ==\n";
    for (int i = 0; i < n; ++i)
        plist[i].printCard();

    cout << "Total patients registered: " << Patient::total << endl;

    OOPPatient op;
    Person *ptr = &op;
    ptr->hello();

    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}
