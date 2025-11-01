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

## Usage Example

### Program Execution:

How many patients do you want to register? 2

--- Patient #1 ---
Enter ID: 23131313
Enter Name: Saksham
Enter Age: 19
Enter Gender: Male
Enter Disease: Fever, Mild Cold
Enter Address: 3/1 Lal Kothi, Jaipur

[Friend] The patient's ID is: 23131313

--- Patient #2 ---
Enter ID: 24142414
Enter Name: Naman
Enter Age: 20
Enter Gender: Male
Enter Disease: Asthma
Enter Address: 4/a-2 malviya nagar, Jaipur

[Friend] The patient's ID is: 24142414

== Registration Cards ==

---- Registration Card ----
ID : 23131313
Name : Saksham
Age : 19
Gender : Male
Disease : Fever, Mild Cold
Address : 3/1 Lal Kothi, Jaipur
---- Registration Card ----
ID : 24142414
Name : Naman
Age : 20
Gender : Male
Disease : Asthma
Address : 4/a-2 malviya nagar, Jaipur
Total patients registered: 2
OOP Inheritance says: Welcome!

Press Enter to exit...

text

### Generated Output File (`patientdata.txt`):

23131313,Saksham,19,Male,Fever, Mild Cold,3/1 Lal Kothi, Jaipur
24142414,Naman,20,Male,Asthma,4/a-2 malviya nagar, Jaipur

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
- `static int total` - class-level counter tracking total registrations
- `static` data persists across all Patient instances
- Demonstrates class-level data management

### 5. **Member Functions**
- `input()` - Collects and stores patient data using `cin.getline()`
- `printCard()` - Displays formatted registration card
- `saveToFile()` - Persists data to file using `ofstream`
- `getId()` - Getter method for patient ID access

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
- `Person` - Abstract base class with virtual member function
- `OOPPatient` - Derived class inheriting from both `Person` and `Patient` (multiple inheritance)
- `virtual void hello()` - Demonstrates polymorphic behavior
- Dynamic binding shows method overriding in derived class

### 10. **Arrays of Objects**
- `Patient plist[10]` - Array container for multiple Patient objects
- Enables batch processing of patient records
- Supports iteration through registered patients

## Project File Structure
Hospital-Management-System/
├── main.cpp # Complete C++ source code
├── main # Executable binary file
├── main.o # Object file (intermediate compilation)
├── patientdata.txt # Patient records database (CSV format)
└── README.md # Project documentation

text

## Data Storage Format
Patient information stored in `patientdata.txt` uses CSV (Comma-Separated Values) format for compatibility and easy data migration:

ID,Name,Age,Gender,Disease,Address
23131313,Saksham,19,Male,Fever, Mild Cold,3/1 Lal Kothi, Jaipur
24142414,Naman,20,Male,Asthma,4/a-2 malviya nagar, Jaipur

text

## System Specifications
- **Patient ID Format**: 8-digit numeric identifier (e.g., 23131313)
- **Maximum Patients**: 10 per session
- **Storage**: Text file-based (no database backend)
- **Features**: Read and write operations (no edit/delete)
- **Search**: No advanced filtering capabilities

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

## Key Implementation Details

### Input Handling
- Uses `cin.getline()` for ALL inputs to avoid buffer issues
- Converts numeric strings using `atoi()` function
- Accepts 8-digit patient ID format (00000000 to 99999999)
- Ensures data integrity across multiple patient entries

### Data Processing
- Static counter increments only when patient data is successfully entered
- Friend function displays patient ID after each registration
- Operator overloading checks for duplicate IDs
- All patient IDs must be 8 digits for consistency

### Output Generation
- Professional registration cards with consistent 8-digit ID formatting
- Summary statistics showing total patients registered
- Polymorphic inheritance demo through OOP class
- Data saved in standardized CSV format

## Future Enhancement Opportunities
- Integrate relational database (SQLite, MySQL, PostgreSQL)
- Implement search and filtering by disease, gender, or date
- Add edit and delete patient record functionality
- Create appointment scheduling module
- Add doctor management and assignment features
- Generate statistical reports and analytics
- Implement user authentication and role-based access control
- Web interface for remote access
- Mobile application for patient self-registration

## Academic Value
This project is ideal for demonstrating comprehensive understanding of Object-Oriented Programming principles including encapsulation, inheritance, polymorphism, and file I/O operations as required in college-level C++ courses.

## Testing Recommendations
1. Test with single patient registration (8-digit ID)
2. Test with maximum 10 patients
3. Verify file creation and data persistence
4. Test duplicate ID detection with matching 8-digit IDs
5. Validate character encoding for special characters in names/addresses
6. Monitor program with various input sizes and formats
7. Confirm consistent ID formatting in registration cards

## Execution Flow
START
↓
Input: Number of Patients (n)
↓
FOR each patient (1 to n):
├→ Read patient details (8-digit ID, Name, Age, Gender, Disease, Address)
├→ Increment static counter
├→ Save to file
├→ Display friend function message
└→ Check for duplicate IDs
↓
Display registration cards with consistent 8-digit formatting
↓
Display total patient count
↓
Show polymorphism demo
↓
END

text

---

**Status**: ✅ Ready for Academic Submission  
**Last Updated**: November 1, 2025  
**Version**: 1.0  
**Project Type**: C++ OOP Mini Project  
**Institution**: Poornima Institute of Engineering and Technology (PIET)  
**ID Format**: 8-Digit Numeric (Standardized)
