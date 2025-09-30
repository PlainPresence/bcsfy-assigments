#include <iostream>
using namespace std;

struct Book {
    int accessionNumber;
    char author[50];
    char title[50];
    int year;
    char publisher[50];
    float cost;
};

int main() {
    Book b;

    cout << "Enter accession number: ";
    cin >> b.accessionNumber;

    cout << "Enter author's name: ";
    cin >> b.author;

    cout << "Enter title of the book: ";
    cin >> b.title;

    cout << "Enter year of publication: ";
    cin >> b.year;

    cout << "Enter publisher's name: ";
    cin >> b.publisher;

    cout << "Enter cost of the book: ";
    cin >> b.cost;

    cout << "\n--- Book Details ---\n";
    cout << "Accession Number: " << b.accessionNumber << "\n";
    cout << "Author: " << b.author << "\n";
    cout << "Title: " << b.title << "\n";
    cout << "Year: " << b.year << "\n";
    cout << "Publisher: " << b.publisher << "\n";
    cout << "Cost: " << b.cost << "\n";

    return 0;
}
