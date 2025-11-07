# Hospital Patient Registration System

## What is this?
A simple hospital system in C++ where you can register patients, store their details, and save everything to a file. Made for learning OOP concepts.

## How to Run

### Windows (Command Line):
g++ main.cpp -o main
main.exe

text

### Linux/Mac:
g++ main.cpp -o main
./main

text

### Code::Blocks:
Open `main.cpp` and press **F9**

## What does it do?

1. You enter how many patients to register (max 10)
2. For each patient, add: ID, name, age, gender, disease, address
3. Check for duplicate patient IDs
4. See all patient details at the end
5. All data is saved in `patientdata.txt`

## Features

- Register new patients
- Store patient information
- Check for duplicate patient IDs
- Display all registered patients
- Save data to file automatically

## OOP Concepts I Used

| Concept | What I Did |
|---------|-----------|
| Class | Created `Patient` class |
| Private Data | Hidden patient ID, name, age, etc. |
| Constructor | Initialize new patients with empty data |
| Static | `totalPatients` counts all registered patients |
| Array of Objects | `patients[10]` stores up to 10 patients |
| Functions | `registerPatient()`, `printDetails()`, `saveToFile()` |
| Friend Function | `showId()` accesses private patient ID |
| Operator Overload | `==` to check duplicate patient IDs |
| Inheritance | `VIPPatient` inherits from `Person` and `Patient` |
| Virtual Function | `welcome()` works differently in both classes |
| File Handling | Save patients to `patientdata.txt` |

## File Format

Each patient is saved like this:
==========================================
Patient Details

-ID: 23131313

-Name: john

-Age: 45

-Gender: M

-Disease: fever

-Address: xyz street



## How to Test

1. Register 2-3 patients with different IDs
2. Try using same patient ID twice to see warning
3. Open `patientdata.txt` to see saved data
4. Check if all details are correct


## --

This is a college project for learning OOP. The focus is on understanding concepts, not a real hospital system.

---

**Date:** November 2025  
**For:** College OOP Assignment

