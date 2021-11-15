#include <iostream>
#include <string>

using namespace std;

struct Book{

    int Id;
    int Year;
    string BookTitle;
    string AuthorName;
    string PublisherName;
    
} Books;

int main(void)
{
    Book Books;

    cout << "***********Book Resgistration***********" << endl;
    
    cout << "Enter with Book ID: ";
    cin >> Books.Id;

    cout << "Enter with Book Year: ";
    cin >> Books.Year;

    cout << "Book Title: ";
    cin.ignore(); // ignore the enter character
    getline(cin, Books.BookTitle);

    cout << "Enter with Author name: ";
    getline(cin, Books.AuthorName);

    cout << "Enter with Publisher name: ";
    getline(cin, Books.PublisherName);

    cout << "Book ID: " << Books.Id << endl; 
    cout << "Year: " << Books.Year << endl;
    cout << "Book Title: " << Books.BookTitle << endl;
    cout << "Author Name: " << Books.AuthorName << endl; 
    cout << "Publisher Name: " << Books.PublisherName << endl;

    return 0;
}