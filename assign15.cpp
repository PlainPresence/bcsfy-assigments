#include <iostream>
using namespace std;

union Book {
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
    cout << "Accession Number: " << b.accessionNumber << "\n";

    cout << "Enter author's name: ";
    cin >> b.author;
    cout << "Author: " << b.author << "\n";

    cout << "Enter title of the book: ";
    cin >> b.title;
    cout << "Title: " << b.title << "\n";

    cout << "Enter year of publication: ";
    cin >> b.year;
    cout << "Year: " << b.year << "\n";

    cout << "Enter publisher's name: ";
    cin >> b.publisher;
    cout << "Publisher: " << b.publisher << "\n";

    cout << "Enter cost of the book: ";
    cin >> b.cost;
    cout << "Cost: " << b.cost << "\n";

    return 0;
}
