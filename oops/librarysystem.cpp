#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    float price;
};

int main() {
    Book library[10] = {
        {1, "Book A", "Author 1", 15.99},
        {2, "Book B", "Author 2", 9.99},
        {3, "Book C", "Author 3", 12.50},
        {4, "Book D", "Author 4", 20.00},
        {5, "Book E", "Author 5", 7.99},
        {6, "Book F", "Author 6", 25.00},
        {7, "Book G", "Author 7", 17.50},
        {8, "Book H", "Author 8", 22.00},
        {9, "Book I", "Author 9", 11.75},
        {10, "Book J", "Author 10", 14.00}
    };

    cout << "Library Book Details:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "ID: " << library[i].id << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "Price: $" << library[i].price << endl;
        cout << endl;
    }

    return 0;
}
