#include <iostream>
using namespace std;
class LibraryBook{
    static int bookCount;
    string name, ID;
    double price;
public:
    // Constructor & Destructor
    LibraryBook(string, string, double);
    ~LibraryBook();
    // Getters & Member Functions
    void display();
    static int booksPublicCount();
};
int LibraryBook::bookCount = 0;
int LibraryBook::booksPublicCount(){
    return LibraryBook::bookCount;
}
LibraryBook::LibraryBook(string name, string ID, double price){
    if(LibraryBook::bookCount < 5)
    {  LibraryBook::bookCount++; }
    else
    {
        cout << "Library is full, cannot add more books\n";
        cout << name << ": " << ID << " couldn't be added\n";
        return;
    }
    this->name = name;
    this->ID = ID;
    this->price = price;
}
LibraryBook::~LibraryBook(){
    LibraryBook::bookCount--;
}
void LibraryBook::display(){
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Price of book: " << price << endl; 
}
int main(){
    LibraryBook book1("Kite Runner", "101", 800.23),
    book2("Silent Patient", "102", 500.55),
    book3("Ikegai", "103", 600.99),
    book4("Thousand Splendid Years", "104", 1400.44),
    book5("Deep Work", "105", 660.76),
    book6("Test book", "106", 100.33);
    book1.display();
    book2. display();
    book3.display();
    book4.display();
    book5.display();
    book6.display();
    cout << "Books Count: " << LibraryBook::booksPublicCount() << endl;
    return 0;
}