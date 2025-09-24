#include <iostream>
#include <string>

using namespace std;

int main() {
    int rollNo;        
    string name;       
    char classSection; 
    string city;       
    int a, b, c, d;     
    int total;         
    float per;

    //taking input from user
    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;      

    cout << "Enter Class Section (single character): ";
    cin >> classSection;

    cout << "Enter City: ";
    cin >> city;

    cout << "Enter marks for 4 subjects separated by spaces: ";
    cin >> a >> b >> c >> d;

    //total and percentage
    total = a + b + c + d;
    per = total / 4.0;

    // display student information
    cout << "\n------ Student Information ------\n";
    cout << "Roll No    : " << rollNo << "\n";
    cout << "Name       : " << name << "\n";
    cout << "Class      : " << classSection << "\n";
    cout << "City       : " << city << "\n";
    cout << "Marks      : " << a << ", " << b << ", " << c << ", " << d << "\n";
    cout << "Total      : " << total << "\n";
    cout << "Percentage : " << per << "%\n";

    return 0;
}
