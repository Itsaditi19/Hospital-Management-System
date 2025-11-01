# Hospital Patient Registration System

## Project Description
A comprehensive **C++ Object-Oriented Hospital Patient Registration System** that enables efficient patient data management. The system allows hospital staff to register multiple patients in a single session, generate professional registration cards, and maintain persistent patient records.

## Features
- **Multi-Patient Registration**: Register up to 10 patients per session
- **Patient Data Management**: Capture ID, Name, Age, Gender, Disease, and Address
- **Registration Cards**: Generate and display formatted registration cards for all patients
- **Data Persistence**: Automatically save all patient records to `patientdata.txt`
- **Duplicate Detection**: Identify and warn about duplicate patient IDs using operator overloading
- **Object-Oriented Design**: Demonstrates key OOP concepts including inheritance, polymorphism, and friend functions

## Technical Stack
- **Language**: C++ (Standard C++11)
- **Compiler**: MinGW (GCC) or equivalent C++ compiler
- **IDE**: Code::Blocks or any C++ IDE
- **Dependencies**: Standard C++ libraries (`iostream`, `fstream`, `cstring`)

## Installation & Setup

### Compile with Code::Blocks:
1. Open `main.cpp` in Code::Blocks
2. Press **F9** to compile and execute
3. Program runs immediately with interactive prompts

### Compile from Command Line (Windows):
g++ main.cpp -o main
main.exe

text

### Compile from Command Line (Linux/macOS):
g++ main.cpp -o main
./main

text

## OOP Concepts Implemented

### 1. **Classes and Objects**
- `Patient` class encapsulates patient data and operations
- Individual patient objects created and managed within an array structure

### 2. **Encapsulation**
- Private data members protect sensitive patient information
- Public interface provides controlled access to patient data
- **Data Members**: `id`, `age`, `name`, `gender`, `disease`, `address`

### 3. **Constructors**
- Default constructor initializes all Patient objects with default values
- Ensures data integrity during object instantiation

### 4. **Static Members**
- `static int total` — class-level counter tracking total registrations
- `static` data persists across all Patient instances
- Demonstrates class-level data management

### 5. **Member Functions**
- `input()` — Collects and stores patient data using `cin.getline()`
- `printCard()` — Displays formatted registration card
- `saveToFile()` — Persists data to file using `ofstream`
- `getId()` — Getter method for patient ID access

### 6. **File Handling (I/O)**
- `ofstream` object for file output operations
- Append mode (`ios::app`) enables cumulative record storage
- CSV format for data portability and analysis

### 7. **Friend Function**
- `friendDemo()` function accesses private member `id`
- Demonstrates controlled private member access outside class scope
- Shows friendship relationship between functions and classes

### 8. **Operator Overloading**
- `operator==` compares patient IDs for duplicate detection
- Custom comparison logic implemented: `id == p2.id`
- Enables intuitive equality checking between Patient objects

### 9. **Inheritance and Polymorphism**
- `Person` — Abstract base class with virtual member function
- `OOPPatient` — Derived class inheriting from both `Person` and `Patient` (multiple inheritance)
- `virtual void hello()` — Demonstrates polymorphic behavior
- Dynamic binding shows method overriding in derived class

### 10. **Arrays of Objects**
- `Patient plist[10]` — Array container for multiple Patient objects
- Enables batch processing of patient records
- Supports iteration through registered patients

## Project File Structure

Hospital-Management-System/

├── main.cpp # -  Complete C++ source code

├── main # -  Executable binary file

├── main.o # -  Object file (intermediate compilation)

├── patientdata.txt # -  Patient records database (CSV format)

└── README.md # -  Project documentation   



## Data Storage Format
Patient information is stored in `patientdata.txt` using CSV (Comma-Separated Values) format for compatibility and easy data migration.

## System Specifications
- **Patient ID Format**: 8-digit numeric identifier (e.g., 23131313)
- **Maximum Patients**: 10 per session
- **Storage**: Text file-based (no database backend)
- **Features**: Read and write operations (no edit/delete)

## Implementation Highlights
- **Robust Input**: Uses `cin.getline()` for reliable string input handling
- **Type Conversion**: `atoi()` safely converts string input to numeric values
- **Memory Efficient**: Fixed-size character arrays minimize dynamic allocation overhead
- **Data Preservation**: File append mode ensures no data loss between sessions
- **Clean Architecture**: Single-file implementation with clear separation of concerns
- **Consistent Formatting**: 8-digit patient IDs maintain professional appearance

## Code Quality Features
- Well-organized class structure with clear method responsibilities
- Comprehensive error handling for invalid inputs
- Professional console output formatting
- Self-documenting code with meaningful variable names
- Demonstrates industry best practices in OOP design

## Future Enhancement Opportunities
- Integrate relational database (SQLite, MySQL, PostgreSQL)
- Implement search and filtering by disease, gender, or date
- Add edit and delete patient record functionality
- Create appointment scheduling module
- Add doctor management and assignment features
- Generate statistical reports and analytics
- Implement user authentication and role-based access control
- Web interface for remote access

## Academic Value
This project is ideal for demonstrating comprehensive understanding of Object-Oriented Programming principles including encapsulation, inheritance, polymorphism, and file I/O operations as required in college-level C++ courses.

## Testing Recommendations
1. Test with single patient registration (8-digit ID)
2. Test with maximum 10 patients
3. Verify file creation and data persistence
4. Test duplicate ID detection with matching 8-digit IDs
5. Validate character encoding for special characters in names/addresses
6. Monitor program with various input sizes and formats

---

**Status**: ✅ Ready for Academic Submission  
**Last Updated**: November 1, 2025  
**Version**: 1.0  
**Project Type**: C++ OOP Mini Project  
**Institution**: Poornima Institute of Engineering and Technology (PIET)  
**ID Format**: 8-Digit Numeric (Standardized)


