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
    Book Books[5];

    for (int i = 0; i < 5; i++) {
        cout << "***********Book Resgistration***********" << endl;
    
        cout << "Enter with Book ID " << i + 1 << " : ";
        cin >> Books[i].Id;

        cout << "Enter with Book Year " << i + 1 << " : ";
        cin >> Books[i].Year;

        cout << "Book Title " << i + 1 << " : ";
        cin.ignore(); // ignore the enter character
        getline(cin, Books[i].BookTitle);

        cout << "Enter with Author name " << i + 1 << " : ";
        getline(cin, Books[i].AuthorName);

        cout << "Enter with Publisher name " << i + 1 << " : ";
        getline(cin, Books[i].PublisherName);
        
        cout << "Book ID: " << Books[i].Id << endl; 
        cout << "Year: " << Books[i].Year << endl;
        cout << "Book Title: " << Books[i].BookTitle << endl;
        cout << "Author Name: " << Books[i].AuthorName << endl; 
        cout << "Publisher Name: " << Books[i].PublisherName << endl;
    }

    return 0;
}