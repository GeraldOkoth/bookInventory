// Group members.
/*
    Gerald Okoth - S09-6698-2020
    Ochieng Nicholas Onyango - S09-10123-2021
    Mutungi Rodgers Moki - S09-6440-2020
*/
//A program to automate library book inventory System.
#include <iostream>
#include <string>

using namespace std;

class Book {
    private: //Book details only accessible with this class.
        string author, title, publisher;
        double price;
        int bookAccountNumber, numberOfCopies;

    public:
        //Function to insert new book in the database
        void insertNewBook()
        {
            //getline() function extract more than one string entered by the user.
			cout << "Enter the author of the book: "<<endl;
			getline(cin, author);
			cout << "\nEnter the title of the book: "<<endl;
			getline(cin, title);
			cout << "\nEnter the price of the book : " <<endl;
			cin >> price;
			cin.ignore();
			cout << "\nEnter the publisher of the book: "<<endl;
			getline(cin, publisher);
			cout << "\nEnter book's account number: " <<endl;
            cin >> bookAccountNumber;
            cout << "\nEnter book number of copies: " <<endl <<endl;
            cin >> numberOfCopies;
        }

        //Function to display books in the database
        void displayBooks()
        {
            cout << "Book Title: " << title << endl;
            cout << "Book Author: " << author << endl;
            cout << "Book Publisher: " << publisher << endl;
            cout << "Book Price: " << price << endl;
            cout << "Book Account Number: " << bookAccountNumber << endl;
            cout << "Number of Copies: " << numberOfCopies << endl;
            cout << endl;
        }
};

//Entry into the main function
int main()
{
    int selector;
    int numberOfBooks = 1; //A variable to declare the number of books in the database.
    Book booksArray[1]; //Declare an array to hold 15 books.

    cout <<"\t\t\t\tBOOK INVENTORY SYSTEM\n";
    cout <<"\t\t\t\t=====================\n\n";

    cout << "Please enter the details of the book: " << endl <<endl;

    for(int i = 0; i < 1; ++i)
        {
            string author;
            string title;
            string publisher;
		    double price;
		    int bookAccountNumber;
		    int numberOfCopies;
            Book myBook; //Create an object of the book.

		    cout << "Book " << (i+1) << endl;
		    myBook.insertNewBook(); //call the function new book to add a new book into the database. using *mybook* object.
		    booksArray[i] = myBook;
        }
    cout << "\nSelect 1 to display the books available in the database: " <<endl;
    cin >> selector; //Stores user's input.

    if(selector == 1)
        {
            for(int i = 0; i < 1; i++)
            {
                cout << "\nThese are the books available in the database: " <<endl <<endl;
                cout << "Book " << (i+1) <<endl;
                booksArray[i].displayBooks(); //iterate through the 15 books in the database and display them.
            }
        }
        else
            cout << "Invalid entry!" <<endl;
    return 0;
}
