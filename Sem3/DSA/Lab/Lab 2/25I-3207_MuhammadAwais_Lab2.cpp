#include <iostream>
#include <string>
using namespace std;
class Book{
private:
	string title, author, id;
	int quantity;
public:
	void add(string name, string writer, string ID, int num){
		title = name;
		author = writer;
		id = ID;
		quantity = num;
	}
	bool sell(string name, int num){
		if(name == title && !isEmpty())
		{
			if(num <= quantity)
			{
				quantity -= num;
				cout << "Purchase successful!\nBooks with title " 
				<< title << " left: " << quantity << endl;
			}
			else cout << "Not enough books!\nOnly " << quantity << " books left.\n";
			return true;
		}
		return false;
	}
	bool findAuthor(string writer){
		if(writer == author && !isEmpty())
		{
			cout << "Title: " << title << "    Quantity: " << quantity << endl;
			return true;
		}
		return false;
	}
	bool updateQuantity(string name, int newNum){
		if(name == title && !isEmpty())
		{
			quantity = newNum;
			cout << "Quantity updated successfully!\n";
			return true;
		}
		return false;
	}
	bool isEmpty(){
		return id == "";
	}
	// Needed this function for deleting books
	void clear(){
		title = ""; author = ""; id = ""; quantity = 0;
	}
	string getTitle(){ return title; }
	string getAuthor(){ return author; }
	string getID(){ return id; }
	int getQuantity(){ return quantity; }
};

	void display(Book *ptr, int size){
		cout << "\n===Books Inventory===\n"
		<< "Book Title    Author    Quantity\n";
		for(int i = 0; i < size; i++)
		{
			if((ptr+i)->isEmpty()) continue;
			cout << (ptr+i)->getTitle() << "    "
			<< (ptr+i)->getAuthor() << "    "      // Pointer arithmethics
			<< (ptr+i)->getQuantity() << endl;
		}
	}
	void delBook(string verify, Book *ptr, int size){
		for(int i = 0; i < size; i++)
		{
			if(!(ptr+i)->isEmpty() && verify == (ptr+i)->getID())
			{
				cout << "Delete \"" << (ptr+i)->getTitle() << "\"? (y/n): ";
				char confirm; cin >> confirm;
				if(confirm == 'y' || confirm == 'Y')
				{
					(ptr+i)->clear();
					cout << "Book deleted successfully!\n";
				}
				else cout << "Deletion cancelled.\n";
				return;
			}
		}
		cout << "No books with such ID!\n";
	}
//	void salesReport(Book *ptr, int size){
//		for(int i = 0; i < size; i++)
//		{
//			
//		}
//	}
int main(){
	int size = 10;
	Book *ptr = new (nothrow)Book[size];
	if(ptr) cout << "Allocated successfully\n";
	else
	{
		cout << "Allocation failed\n";
		return 1;
	}
	int choice = 0;
	do
	{
		cout << "\n***===WELCOME TO BOOK INVENTORY===***\n"
		<< "Enter a choice!\n1. Display Inventory\n2. Sell Books\n" 
		<< "3. Add a Book\n4. Update Quantity of a Book\n"
		<< "5. Search a Book\n6. Delete a Book\n\n0. Exit program...\n";
		cin >> choice;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input! Please enter a number.\n";
			continue;
		}
		switch(choice)
		{
			case 0:
				cout << "\nExiting Program...\n***===Thankyou for using Book Inventory===***\n";
				break;
			case 1:
				display(ptr, size);
				break;
			case 2:
				{
					int num; string name;
					cout << "Enter name of book you want to buy: "; cin >> name;
					cout << "Enter quantity: "; cin >> num;
					if(num < 0) { cout << "Quantity cannot be negative!\n"; break; }
					bool found = false;
					for(int i = 0; i < size; i++)
					{
						if((ptr+i)->sell(name, num)) { found = true; break; }
					}
					if(!found) cout << "No books with title " << name << " found!\n";
					break;
				}
			case 3:
				{
					int slot = -1;
					for(int i = 0; i < size; i++)
					{
						if((ptr+i)->isEmpty()) { slot = i; break; }
					}
					if(slot == -1) { cout << "Inventory full! Cannot add more books.\n"; break; }
					int num; string name, ID,  writer;
					cout << "Enter name of book you want to add: "; cin >> name;
					cout << "Enter name of author of the book: "; cin >> writer;
					cout << "Enter unique id of the book: "; cin >> ID;				
					cout << "Enter quantity: "; cin >> num;
					if(num < 0) { cout << "Quantity cannot be negative!\n"; break; }
					(ptr+slot)->add(name, writer, ID, num);
					cout << "Book added successfully!\n";
					break;
				}
			case 4:
				{
					int num; string name;
					cout << "Enter name of the book: "; cin >> name;
					cout << "Enter new quanitity of this book: "; cin >> num;
					if(num < 0) { cout << "Quantity cannot be negative!\n"; break; }
					bool found = false;
					for(int i = 0; i < size; i++)
					{
						if((ptr+i)->updateQuantity(name, num)) { found = true; break; }
					}
					if(!found) cout << "No books with title \"" << name << "\" exist!\n";
					break;
				}
			case 5:
				{
					string writer;
					cout << "Enter name of author whose books you want to search: "; cin >> writer;
					bool found = false;
					for(int i = 0; i < size; i++)
					{
						if((ptr+i)->findAuthor(writer)) found = true;
					}
					if(!found) cout << "No books by author named " << writer << " are found!\n";
					break;
				}
			case 6:
				{
					string verify;
					cout << "Enter the unique ID of the book to delete: "; cin >> verify;
					delBook(verify, ptr, size);
					break;
				}
			default:
				cout << "Invalid choice!\nKindly enter a valid choice.\n";
				break;
		}
	}while(choice);
	delete[] ptr;
}
