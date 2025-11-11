#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Patient {
private:
    int patientId;
    char pName[50];
    int age;
    char gender[10];
    char disease[50];
    char address[100];
public:
    static int totalPatients;
    Patient() {
        patientId = 0;
        strcpy(pName, "");
        age = 0;
        strcpy(gender, "");
        strcpy(disease, "");
        strcpy(address, "");
    }
    void registerPatient() {
        char temp[100];
        cout << "\nEnter Patient ID: ";
        cin.getline(temp, 100);
        patientId = atoi(temp);

        cout << "Enter Name: ";
        cin.getline(pName, 50);

        cout << "Enter Age: ";
        cin.getline(temp, 100);
        age = atoi(temp);

        cout << "Enter Gender (M/F/Other): ";
        cin.getline(gender, 10);

        cout << "Enter Disease: ";
        cin.getline(disease, 50);

        cout << "Enter Address: ";
        cin.getline(address, 100);

        totalPatients++;
    }
    void printDetails() {
        cout << "\nPatient ID: " << patientId << endl;
        cout << "Name: " << pName << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Disease: " << disease << endl;
        cout << "Address: " << address << endl;
    }

    void saveToFile() {
        ofstream file("patientdata.txt", ios::app);
        if (file.is_open()) {
            file << "==========================================\n";
            file << "Patient Details\n";
            file << "==========================================\n";
            file << "ID: " << patientId << "\n";
            file << "Name: " << pName << "\n";
            file << "Age: " << age << "\n";
            file << "Gender: " << gender << "\n";
            file << "Disease: " << disease << "\n";
            file << "Address: " << address << "\n";
            file << "==========================================\n\n";
            file.close();
        }
    }
    int getId() {
        return patientId;
    }
    friend void showId(Patient &);

    bool operator==(Patient &other) {
        return patientId == other.patientId;
    }
};
int Patient::totalPatients = 0;
void showId(Patient &p) {
    cout << "[Info] Patient ID: " << p.patientId << endl;
}

class Person {
public:
    virtual void welcome() {
        cout << "Patient registered!\n";
    }
};

class VIPPatient : public Person, public Patient {
public:
    void welcome() {
        cout << "Welcome VIP Patient!\n";
    }
};
void showPatientDataFile() {
    ifstream file("patientdata.txt");
    if (!file) {
        cout << "\nNo patient data found.\n";
        return;
    }
    cout << "\n--- Contents of patientdata.txt ---\n";
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}
int main() {
    char temp[100];
    int n;
    cout << "How many patients to register? ";
    cin.getline(temp, 100);
    n = atoi(temp);

    Patient patients[10];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Patient " << (i+1) << " ---\n";
        patients[i].registerPatient();

        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (patients[i] == patients[j]) {
                isDuplicate = true;
                cout << "WARNING: Patient ID already exists!\n";
                break;
            }
        }
        if (!isDuplicate) {
            patients[i].saveToFile();
            showId(patients[i]);
        }
    }

    cout << "\n=== All Patients ===\n";
    for (int i = 0; i < n; i++) {
        patients[i].printDetails();
    }

    cout << "\nTotal Patients Registered: " << Patient::totalPatients << endl;
    VIPPatient vip;
    Person *ptr = &vip;
    ptr->welcome();
    showPatientDataFile();
    cout << "\nPress Enter to exit...";
    cin.get();
    return 0;
}
