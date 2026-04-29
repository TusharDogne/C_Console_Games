#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string title;
    float price;
    string publisher;
    int stockPosition;

public:
    // Constructor
    Book(string author, string title, float price, string publisher, int stockPosition) {
        this->author = author;
        this->title = title;
        this->price = price;
        this->publisher = publisher;
        this->stockPosition = stockPosition;
    }

    // Member function to check availability and display book details
    void checkAvailability(string searchTitle, string searchAuthor) {
        if (title == searchTitle && author == searchAuthor) {
            cout << "Book details:" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock position: " << stockPosition << endl;
            cout << endl;
            requestCopies();
        } else {
            cout << "Book not found." << endl;
        }
    }

    // Member function to request copies and calculate the total cost
    void requestCopies() {
        int numCopies;
        cout << "Enter the number of copies required: ";
        cin >> numCopies;

        if (numCopies <= stockPosition) {
            float totalCost = price * numCopies;
            cout << "Total cost for " << numCopies << " copies: $" << totalCost << endl;
        } else {
            cout << "Required copies not in stock." << endl;
        }
    }
};

int main()
 {
    // Create books
    Book* book1 = new Book("Author1", "Title1", 10.99, "Publisher1", 5);
    Book* book2 = new Book("Author2", "Title2", 15.99, "Publisher2", 10);

    // Example usage
    book1->checkAvailability("Title1", "Author1");
    book2->checkAvailability("Title3", "Author2");

    // Clean up memory
    delete book1;
    delete book2;}
